from collections.abc import Iterable, Sequence
from os.path import *
import argparse
import functools
import inspect
import re
import sys
import copy

defaultGlobals = {}
targets = {}
cwd = ""
unmaterialisedTargets = set()
emitter = None
currentVars = None


class ABException(BaseException):
    pass


class ParameterList(Sequence):
    def __init__(self, parent=[]):
        self.data = parent

    def __getitem__(self, i):
        return self.data[i]

    def __len__(self):
        return len(self.data)

    def __str__(self):
        return " ".join(self.data)

    def __add__(self, other):
        newdata = self.data.copy() + other
        return ParameterList(newdata)

    def __repr__(self):
        return f"<PList: {self.data}>"


def Vars(parent=None):
    data = {}

    class VarsImpl:
        def __setattr__(self, k, v):
            data[k] = v

        def __getattr__(self, k):
            if k in data:
                return data[k]
            if parent:
                return getattr(parent, k)
            return ParameterList()

        def __repr__(self):
            return f"<Vars-{id(self)}: {data} -> {parent}>"

        __setitem__ = __setattr__
        __getitem__ = __getattr__

    return VarsImpl()

class Invocation:
    name = None
    callback = None
    types = None
    ins = []
    outs = []
    rawArgs = {}
    vars = None
    varsettings = None

    def materialise(self):
        if self in unmaterialisedTargets:
            self.args = {}
            for k, v in self.rawArgs.items():
                t = self.types.get(k, None)
                if t:
                    v = t.convert(v)
                self.args[k] = v

            global currentVars
            self.vars = Vars(self.callerVars)
            oldVars = currentVars
            currentVars = self.vars

            if self.varsettings:
                for k, v in self.varsettings.items():
                    if k.startswith("+"):
                        k = k[1:]
                        self.vars[k] = self.vars[k] + flatten(v)
                    else:
                        self.vars[k] = ParameterList(v)

            self.callback.__globals__["self"] = self
            newInvocation = self.callback(**self.args)
            newInvocation = newInvocation or self
            if newInvocation != self:
                for k in dir(newInvocation):
                    if not k.startswith("_"):
                        setattr(self, k, getattr(newInvocation, k))
                self.materialise()

            currentVars = oldVars
            unmaterialisedTargets.remove(self)

    def __str__(self):
        return "<Invocation %s>" % self.fullname


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
            if key == "vars":
                return invocation.vars
            f = filenamesof(invocation.args[key])
            if isinstance(f, Sequence):
                f = ParameterList(f)
            return f

    return eval("f%r" % s, invocation.callback.__globals__, Converter())


class MakeEmitter:
    def begin(self):
        emit("hide = @")

    def end(self):
        pass

    def var(self, name, value):
        # Don't let emit insert spaces.
        emit(name+"="+unmake(value))

    def rule(self, name, ins, outs):
        if outs:
            emit(".PHONY:", name)
            emit(name, ":", unmake(outs))
            emit(outs, "&:", unmake(ins))
        else:
            emit(name, ":", unmake(ins))

    def exec(self, command):
        emit("\t$(hide)", unmake(command))


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
    if "self" in func.__globals__:
        os.exit()

    @functools.wraps(func)
    def wrapper(*, name, **kwargs):
        i = Invocation()
        i.cwd = cwd
        i.fullname = cwd + "+" + name
        i.name = name
        i.types = func.__annotations__
        i.callback = func
        i.callerVars = currentVars
        i.varsettings = kwargs.get("vars", None)
        if i.varsettings:
            kwargs.pop("vars")

        bound = sig.bind(name=name, **kwargs)
        bound.apply_defaults()
        i.rawArgs = bound.arguments

        targets[i.fullname] = i
        unmaterialisedTargets.add(i)
        return i

    defaultGlobals[name] = wrapper
    return wrapper


@Rule
def simplerule(
        name=None,
        ins: Targets() = [],
        outs=[],
        deps: Targets() = [],
        commands: Strings() = [],
        label="RULE"):
    self.ins = ins
    self.outs = outs
    emitter.rule(self.fullname, filenamesof(ins, deps), outs)
    emitter.exec(templateexpand("echo {label} {ins}", self))

    for out in filenamesof(outs):
        dir = dirname(out)
        if dir:
            emitter.exec("mkdir -p "+dir)

    for c in commands:
        emitter.exec(templateexpand(c, self))


@Rule
def normalrule(
        name=None,
        ins: Targets() = [],
        deps: Targets() = [],
        outleaves=[],
        label="RULE",
        objdir=None,
        commands=[]):
    objdir = objdir or join("$(OBJ)", self.cwd, name)

    return simplerule(
        name=name,
        ins=ins,
        deps=deps,
        outs=[join(objdir, f) for f in outleaves],
        label=label,
        commands=commands)


@Rule
def installable(
        name=None,
        items={}):

    emitter.rule(self.fullname, filenamesof(items.values()), items.keys())
    emitter.exec(templateexpand("echo EXPORT {name}", self))

    for dest, src in items.items():
        dir = dirname(dest)
        if dir:
            emitter.exec("mkdir -p "+dir)

        srcs = filenamesof(src)
        if len(srcs) != 1:
            raise ABException(
                "a dependency of an installable must have exactly one output file")

        emitter.exec("cp %s %s" % (srcs[0], dest))


def loadbuildfile(filename):
    with open(filename, "r") as fp:
        global cwd
        code = compile(fp.read(), filename,
                       mode="exec")
        oldCwd = cwd
        cwd = dirname(filename)
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

    global currentVars
    currentVars = Vars()

    for k in ("Rule", "Targets"):
        defaultGlobals[k] = globals()[k]
    defaultGlobals["print"] = debug

    for f in args.files:
        loadbuildfile(f)

    while unmaterialisedTargets:
        total = len(targets)
        finished = total - len(unmaterialisedTargets)
        sys.stderr.write("%d/%d\r" % (finished, total))
        next(iter(unmaterialisedTargets)).materialise()
    sys.stderr.write("%d/%d\n" % (total, total))

    emitter.end()


main()
