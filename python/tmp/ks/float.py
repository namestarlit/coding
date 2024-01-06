#!/usr/bin/python3

class RoundFloat(float):

    def __new__(cls, val):
        return float.__new__(cls, round(val, 2))
