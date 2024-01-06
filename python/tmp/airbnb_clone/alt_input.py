#!/usr/bin/python3
"""
Alternative inputs to the Hello.
"""

import cmd


class Hello(cmd.Cmd):
    # Disable rawinput module use
    use_rawinput = False

    # Do not show a prompt after each command read
    prompt = ""

    def do_hello(self, line):
        print("hello,", line)

    def do_EOF(self, line):
        return True


if __name__ == "__main__":
    import sys

    with open(sys.argv[1], "rt") as input:
        Hello(stdin=input).cmdloop()
