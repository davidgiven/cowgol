from collections.abc import Iterable, Sequence
from os.path import *
from types import SimpleNamespace
import argparse
import copy
import functools
import importlib
import importlib.abc
import importlib.util
import inspect
import re
import sys
import types
import pathlib
import builtins

defaultGlobals = {}
targets = {}
unmaterialisedTargets = set()
outputFp = None
emitter = None
currentVars = None

sys.path += ["."]
old_import = builtins.__import__


def new_import(name, *args, **kwargs):
    if name not in sys.modules:
        path = name.replace(".", "/") + ".py"
        if isfile(path):
            sys.stderr.write(f"loading {path}\n")
            loader = importlib.machinery.SourceFileLoader(name, path)

            spec = importlib.util.spec_from_loader(
                name, loader, origin="built-in"
            )
            module = importlib.util.module_from_spec(spec)
            sys.modules[name] = module
            spec.loader.exec_module(module)

    return old_import(name, *args, **kwargs)


builtins.__import__ = new_import


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
    ins = None
    outs = None
    rawArgs = None
    vars = None
    varsettings = None

    def materialise(self):
        if self in unmaterialisedTargets:
            # Perform type conversion to the declared rule parameter types.

            self.args = {}
            for k, v in self.rawArgs.items():
                t = self.types.get(k, None)
                if t:
                    v = t.convert(v, self)
                self.args[k] = v

            # Create a new variable frame and set any variables.

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

            # Actually call the callback.

            self.callback(**self.args)
            if not self.outs:
                raise ABException(f"{self.name} didn't set self.outs")

            # Destack the variable and invocation frame.

            currentVars = oldVars
            if self in unmaterialisedTargets:
                unmaterialisedTargets.remove(self)

    def __repr__(self):
        return "<Invocation %s>" % self.name


class Type:
    pass


class String(Type):
    def convert(self, value, invocation):
        if type(value) != "string":
            raise ABException("rule wanted a String, but got a " + type(value))
        return value


class Strings(Type):
    def convert(self, value, invocation):
        if type(value) == "string":
            value = [value]
        return value


class Targets(Type):
    def convert(self, value, invocation):
        if type(value) is str:
            value = [value]
        if type(value) is list:
            value = targetsof(value, cwd=invocation.cwd)
        return value


class Target(Type):
    def convert(self, value, invocation):
        if not value:
            return None
        return targetof(value, cwd=invocation.cwd)


class TargetsMap(Type):
    def convert(self, value, invocation):
        if type(value) is dict:
            return {
                targetof(k, cwd=invocation.cwd): targetof(v, cwd=invocation.cwd)
                for k, v in value.items()
            }
        raise ABException(f"wanted a dict of targets, got a {type(value)}")


def flatten(*xs):
    def recurse(xs):
        for x in xs:
            if isinstance(x, Iterable) and not isinstance(x, (str, bytes)):
                yield from recurse(x)
            else:
                yield x

    return list(recurse(xs))


def massagefilename(s):
    callername = inspect.stack()[1][0].f_globals["__name__"]
    cwd = dirname(callername.replace(".", "/"))

    if ("+" in name) and not name.startswith("+"):
        (cwd, target) = name.split("+", 1)

    i = Invocation()
    if name.startswith("./"):
        name = join(cwd, name)
    elif "+" not in name:
        name = cwd + "+" + name


def fileinvocation(s):
    i = Invocation()
    i.name = "(anonymous)"
    i.outs = [s]
    targets[s] = i
    return i


def targetof(s, cwd):
    if isinstance(s, Invocation):
        s.materialise()
        return s

    if s in targets:
        t = targets[s]
        t.materialise()
        return t

    if s.startswith("+"):
        s = cwd + s
    if s.startswith("./"):
        s = join(cwd, s)
    if s.startswith("$"):
        return fileinvocation(s)

    if "+" not in s:
        if isdir(s):
            s = s + "+" + basename(s)
        else:
            return fileinvocation(s)

    (path, target) = s.split("+", 2)
    loadbuildfile(join(path, "build.py"))
    if not s in targets:
        raise ABException(f"build file at {path} doesn't contain +{target}")
    i = targets[s]
    i.materialise()
    return i


def targetsof(*xs, cwd):
    return flatten([targetof(x, cwd) for x in flatten(xs)])


def filenamesof(*xs):
    fs = []
    for t in flatten(xs):
        if type(t) == str:
            fs += [t]
        else:
            fs += [normpath(f) for f in t.outs]
    return fs


def filenameof(x):
    xs = filenamesof(x)
    if len(xs) != 1:
        raise ABException("expected a single item")
    return xs[0]


def stripext(path):
    return splitext(path)[0]


def emit(*args):
    outputFp.write(" ".join(flatten(args)))
    outputFp.write("\n")


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
        emit(".DELETE_ON_ERROR:")
        emit(".SECONDARY:")

    def end(self):
        pass

    def var(self, name, value):
        # Don't let emit insert spaces.
        emit(name + "=" + unmake(value))

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
        emit(name + "=" + unmake(value))

    def rule(self, name, ins, outs):
        if outs:
            emit("build", name, ": phony", unmake(outs))
            emit("build", unmake(outs), ": build", unmake(ins))
        else:
            emit("build", name, ": phony", unmake(ins))


def Rule(func):
    sig = inspect.signature(func)

    @functools.wraps(func)
    def wrapper(*, name=None, replaces=None, **kwargs):
        callername = inspect.stack()[1][0].f_globals["__name__"]
        cwd = dirname(callername.replace(".", "/"))

        if name:
            if ("+" in name) and not name.startswith("+"):
                (cwd, target) = name.split("+", 1)

            i = Invocation()
            if name.startswith("./"):
                name = join(cwd, name)
            elif "+" not in name:
                name = cwd + "+" + name

            i.name = name
            i.localname = name.split("+")[-1]

            if name in targets:
                raise ABException(f"target {i.name} has already been defined")
            targets[name] = i
        elif replaces:
            i = replaces
            name = i.name
        else:
            raise ABException("you must supply either name or replaces")

        i.cwd = cwd
        i.types = func.__annotations__
        i.callback = func
        i.callerVars = currentVars
        i.varsettings = kwargs.get("vars", None)
        setattr(i, func.__name__, SimpleNamespace())

        kwargs.pop("vars", None)

        bound = sig.bind(name=name, self=i, **kwargs)
        bound.apply_defaults()
        i.rawArgs = bound.arguments

        unmaterialisedTargets.add(i)
        if replaces:
            i.materialise()
        return i

    defaultGlobals[func.__name__] = wrapper
    return wrapper


@Rule
def simplerule(
    self,
    name,
    ins: Targets() = [],
    outs=[],
    deps: Targets() = [],
    commands: Strings() = [],
    label="RULE",
):
    self.ins = ins
    self.outs = outs
    emitter.rule(self.name, filenamesof(ins, deps), outs)
    emitter.exec(templateexpand("echo {label} {name}", self))

    for out in filenamesof(outs):
        dir = dirname(out)
        if dir:
            emitter.exec("mkdir -p " + dir)

    for c in commands:
        emitter.exec(templateexpand(c, self))


@Rule
def normalrule(
    self,
    name=None,
    ins: Targets() = [],
    deps: Targets() = [],
    outs=[],
    label="RULE",
    objdir=None,
    commands=[],
):
    objdir = objdir or join("$(OBJ)", name)

    simplerule(
        replaces=self,
        ins=ins,
        deps=deps,
        outs=[join(objdir, f) for f in outs],
        label=label,
        commands=commands,
    )


@Rule
def export(self, name=None, items: TargetsMap() = {}, deps: Targets() = []):
    emitter.rule(
        self.name, filenamesof(items.values(), deps), filenamesof(items.keys())
    )
    emitter.exec(f"echo EXPORT {self.name}")

    self.ins = items.values()
    self.outs = filenamesof(deps)
    for dest, src in items.items():
        destf = filenameof(dest)
        dir = dirname(destf)
        if dir:
            emitter.exec("mkdir -p " + dir)

        srcs = filenamesof(src)
        if len(srcs) != 1:
            raise ABException(
                "a dependency of an export must have exactly one output file"
            )

        emitter.exec("cp %s %s" % (srcs[0], destf))
        self.outs += [destf]


def loadbuildfile(filename):
    filename = filename.replace("/", ".").removesuffix(".py")
    builtins.__import__(filename)


def load(filename):
    loadbuildfile(filename)
    callerglobals = inspect.stack()[1][0].f_globals
    for k, v in defaultGlobals.items():
        callerglobals[k] = v


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument(
        "-m", "--mode", choices=["make", "ninja"], default="make"
    )
    parser.add_argument("-o", "--output")
    parser.add_argument("files", nargs="+")
    args = parser.parse_args()

    global outputFp
    outputFp = open(args.output, "wt")

    global emitter
    if args.mode == "make":
        emitter = MakeEmitter()
    else:
        emitter = NinjaEmitter()
    emitter.begin()

    global currentVars
    currentVars = Vars()

    for k in ("Rule", "Targets", "load", "filenamesof", "stripext"):
        defaultGlobals[k] = globals()[k]

    global __name__
    sys.modules["build.ab2"] = sys.modules[__name__]
    __name__ = "build.ab2"

    for f in args.files:
        loadbuildfile(f)

    total = 0
    while unmaterialisedTargets:
        total = len(targets)
        finished = total - len(unmaterialisedTargets)
        sys.stderr.write("%d/%d\r" % (finished, total))
        next(iter(unmaterialisedTargets)).materialise()
    sys.stderr.write("%d/%d\n" % (total, total))

    emitter.end()


main()
