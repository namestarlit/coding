#!/usr/bin/python3

import modname


class BaseClass(object):
    """An empty base class."""
    pass

class DerivedClass(BaseClass):
    """Derived class inheriting from a BaseClass"""
    pass

# you can use one from a module as well.
class DerivedClassName(modname.BaseClassName):
    """Inherts from a class defined in a module."""
    pass
