#!/usr/bin/python3

import sys


class RedirectStdoutTo(object):
    """Redirects the stdout."""

    def __init__(self, out_new):
        """Initializes an instance of RedirectStdoutTo class."""
        self.out_new = out_new

    def __enter__(self):
        """Swap sys.stdout to self.out_new."""
        self.out_old = sys.stdout
        sys.stdout = self.out_new

    def __exit__(self, *args):
        """Swap it back to stdout at exit."""
        sys.stdout = self.out_old

print('A')

with open('out.log', mode='w', encoding='utf-8') as a_file, RedirectStdoutTo(a_file):
    print('B')

print('C')
