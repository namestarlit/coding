#!/usr/bin/python3
"""Hashing your own classes."""


class Point(object):

    def __init__(self, x, y):
        self.x = x
        self.y = y

    def __eq__(self, p):
        return self.x == p.x and self.y == p.y

    def __hash__(self):
        return hash(self.x) ^ hash(self.y)
