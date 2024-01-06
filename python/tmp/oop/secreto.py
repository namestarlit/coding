#!/usr/bin/python3

class Secreto(object):

    def __init__(self, name=None, secret=None):
        self.name = name
        self.__secret = [] 
        if secret:
            self.__secret.append(str(secret))

    @property
    def secret(self):
        password = input("tell me a little secret first :)\n > ")
        if password == "I love Asnath":
            print("*" * 32 + "\nYOU UNLOCKED MY DEEPEST SECRETES\n" + "*" * 32)
            for secret in self.__secret[:]:
                if secret == self.__secret[-1]:
                    print(secret)
                    continue
                print(secret)
                print()
        else:
            print("My secretes are only for my babe : )")

    @secret.setter
    def secret(self, secret):
        if self.__secret is None:
            self.__secret = [str(secret)]
        else:
            self.__secret.append(str(secret))


if __name__ == "__main__":
    love = Secreto("Asnath")

    love.secret = f"""
I love you so much {love.name}
Just thinking about you...
turns me on.
You make me horny!"""
    love.secret = "Nakupenda babe <3"
    love.secret = "I am missing you like crazy babe"

    love.secret
