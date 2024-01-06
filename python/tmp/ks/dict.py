#!/usr/bin/python3


class SortedKeyDict(dict):
    
    def __new__(cls, val):
        return dict.__new__(cls, val.clear())


class SortedKeyDict_a(dict):
    
    def example(self):
        return self.keys()
