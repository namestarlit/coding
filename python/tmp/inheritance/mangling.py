#!/usr/bin/python3

class Mapping(object):
    """defines a base class mapping."""

    def __init__(self, iterable):
        """Initializes a an instance."""
        
        self.items_list = []
        self.__update = update(iterable)

    def update(self, iterable):
        """updates a list of items."""
        for item in iterable:
            self.items_list.append(item)

    __update = update # private copy of original update method


class MappingSubClass(Mapping):
    """subclass definitin."""

    def update(self, keys, value):
        """defines the update method."""
        # provide a new signature for update()
        # but does not break __init__()
        for item in zip(keys, values):
            self.items_list.append(item)
