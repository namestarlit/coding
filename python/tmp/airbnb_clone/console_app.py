#!/usr/bin/python3
"""
cmd module demonstration.
"""

import cmd


class Console(cmd.Cmd):
    prompt = "(console) "


if __name__ == '__main__':
    Console().cmdloop()
