#!/usr/bin/python3
"""
cmd class attributes.
"""

import cmd


class Hello(cmd.Cmd):

    prompt = '$ '
    intro = "Simple command processor example..."

    doc_header = 'doc_header'
    misc_header = 'misc_header'
    undoc_header = 'undoc_header'

    ruler = '_'

    def do_prompt(self, line):
        "Change the interactive prompt"
        self.prompt = line + ': '

    def do_EOF(self, line):
        return True


if __name__ == "__main__":
    Hello().cmdloop()
