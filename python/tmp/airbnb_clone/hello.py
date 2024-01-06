#!/usr/bin/python3
"""
hello console.
"""

import cmd

# Set up gnureadline as readline if installed
try:
    import gnureadline
    import sys
    sys.modules['readline'] = gnureadline
except ImportError:
    pass


class Hello(cmd.Cmd):
    """cmd module console interpreter."""

    prompt = "(hello) "

    friends = ['Rogath', 'Eddy', 'Steve', 'Wisdom']

    def do_greet(self, person):
        """greet [person]

        Greet the named  Person.
        """
        if person and person in self.friends:
            greeting = "Hello, {}!".format(person)
        elif person:
            greeting = "Hola, {}".format(person)
        else:
            greeting = "Hello there"

        print(greeting)

    def complete_greet(self, text, line, begidx, endidx):
        if not text:
            completions = self.friends
        else:
            completions = [
                    f
                    for f in self.friends
                    if f.startswith(text)
                    ]
        return completions

    def help_greet(self):
        print('\n'.join([
            'greet [person]',
            'Greet the named person'
            ]))

    def do_EOF(self, line):
        return True

    def postloop(self):
        print("\nAdìos")

if __name__ == "__main__":
    Hello().cmdloop()
