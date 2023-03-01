from collections.abc import Iterable
import argparse
import functools
import inspect
import os.path
import re
import sys

defaultGlobals = {}
targets = {}
cwd = "."
unmaterialisedTargets = set()
emitter = None


class ABException(BaseException):
    pass


class Invocation:
    name = None
    callback = None
    types = None
    ins = []
    outs = []
    rawArgs = {}

    def materialise(self):
        if self in unmaterialisedTargets:
            self.args = {}
            for k, v in self.rawArgs.items():
                t = self.types.get(k, None)
                if t:
                    v = t.convert(v)
                self.args[k] = v

            self.callback.__globals__["self"] = self
            self.callback(**self.args)
            unmaterialisedTargets.remove(self)


class Type:
    pass


class String(Type):
    def convert(self, value):
        if type(value) != "string":
            raise ABException("rule wanted a String, but got a "+type(value))
        return value


class Strings(Type):
    def convert(self, value):
        if type(value) == "string":
            value = [value]
        return value


class Targets(Type):
    def convert(self, value):
        if type(value) is str:
            value = [value]
        if type(value) is list:
            value = [targetof(v) for v in value]
        return value


def debug(*s):
    print(*s, file=sys.stderr)


def flatten(*xs):
    def recurse(xs):
        for x in xs:
            if isinstance(x, Iterable) and not isinstance(x, (str, bytes)):
                yield from recurse(x)
            else:
                yield x

    return list(recurse(xs))


def targetof(s):
    if isinstance(s, Invocation):
        return s

    if s.startswith("+"):
        s = cwd + s
    if s.startswith("./"):
        s = cwd + "/" + s

    if s in targets:
        t = targets[s]
        t.materialise()
        return t

    if "+" in s:
        raise ABException("target reference %s not supported yet" % s)
    else:
        i = Invocation()
        i.outs = [s]
        targets[s] = i
        return i


def targetsof(*xs):
    return flatten([targetof(x) for x in flatten(xs)])


def filenamesof(*xs):
    xs = targetsof(xs)

    f = []
    for t in xs:
        f += t.outs
    return f


def emit(*args):
    print(*flatten(args))


def unmake(ss):
    return ss


def templateexpand(s, invocation):
    class Converter:
        def __getitem__(self, key):
            f = filenamesof(invocation.args[key])
            if type(f) is list:
                return " ".join(f)
            return f

    return eval("f%r" % s, invocation.callback.__globals__, Converter())


class MakeEmitter:
    def begin(self):
        emit("hide = @")

    def end(self):
        pass

    def var(self, name, value):
        # Don't let emit insert spaces.
        emit(name+"="+value)

    def rule(self, name, ins, outs):
        if outs:
            emit(".PHONY:", name)
            emit(name, ":", outs)
            emit(outs, "&:", ins)
        else:
            emit(name, ":", ins)

    def exec(self, command):
        emit("\t$(hide)", command)


class NinjaEmitter:
    def begin(self):
        emit("rule build\n")
        emit("  command = $command\n")
        emit("\n")

    def var(self, name, value):
        # Don't let emit insert spaces.
        emit(name+"="+unmake(value))

    def rule(self, name, ins, outs):
        if outs:
            emit("build", name, ": phony", unmake(outs))
            emit("build", unmake(outs), ": build", unmake(ins))
        else:
            emit("build", name, ": phony", unmake(ins))


def Rule(func):
    name = func.__name__
    sig = inspect.signature(func)

    @functools.wraps(func)
    def wrapper(*, name, **kwargs):
        bound = sig.bind(name=name, **kwargs)
        bound.apply_defaults()

        i = Invocation()
        i.fullname = cwd + "+" + name
        i.name = name
        i.rawArgs = bound.arguments
        i.types = func.__annotations__
        i.callback = func

        targets[i.fullname] = i
        unmaterialisedTargets.add(i)

    defaultGlobals[name] = wrapper
    return wrapper


@Rule
def simplerule(
        name=None,
        ins: Targets() = [],
        outs: Strings() = [],
        deps: Targets() = [],
        commands: Strings() = [],
        label="RULE"):

    self.ins = ins
    self.outs = outs
    emitter.rule(self.fullname, filenamesof(ins, deps), outs)
    emitter.exec(templateexpand("@echo {label} {ins}", self))
    for c in commands:
        emitter.exec(templateexpand(c, self))


def loadbuildfile(filename):
    with open(filename, "r") as fp:
        global cwd
        code = compile(fp.read(), filename,
                       mode="exec")
        oldCwd = cwd
        cwd = os.path.dirname(filename)
        if cwd == "":
            cwd = "."
        exec(code, dict(defaultGlobals, CWD=cwd))
        cwd = oldCwd


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument(
        "-m", "--mode", choices=["make", "ninja"], default="make")
    parser.add_argument("files", nargs="+")
    args = parser.parse_args()

    global emitter
    if args.mode == "make":
        emitter = MakeEmitter()
    else:
        emitter = NinjaEmitter()
    emitter.begin()

    for f in args.files:
        loadbuildfile(f)

    while unmaterialisedTargets:
        debug(len(unmaterialisedTargets))
        next(iter(unmaterialisedTargets)).materialise()

    emitter.end()


main()
