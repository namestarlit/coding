#!/usr/bin/python3
"""
In the case of dictionaries and sets, that might mean
looking for speciﬁc keys individually, generating a sorted list of the contents of the data
structure, or comparing against a literal value for equality instead of depending on the
string representation.
"""

import collections


def group_by_length(words):
    """Returns a dictionary grouping words into sets by length.

    >>> group_by_length(['python', 'module', 'of', 'the', 'week'])
    >>> grouped = {2:set(['of']),
    ...            3:set(['the']),
    ...            4:set(['week']),
    ...            6:set(['python', 'module'])
    ...            }
    True

    """
    d = collections.defaultdict(set)
    for word in words:
        d[len(word)].add(word)
    return d
