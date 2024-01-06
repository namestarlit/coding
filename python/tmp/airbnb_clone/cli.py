#!/usr/bin/python3
"""
Interactive or command line.
"""

import cmd


class InteractiveOrCL(cmd.Cmd):
    """Accepts commands via the normal interactive
    prompt or on the command line.
    """

    def do_hello(self, line):
        print("Hello,", line)

    def do_EOF(self, line):
        return True

if __name__ == "__main__":
    import sys

    if len(sys.argv) > 1:
        InteractiveOrCL().onecmd(' '.join(sys.argv[1:]))
    else:
        InteractiveOrCL().cmdloop("Interactive Mode")
