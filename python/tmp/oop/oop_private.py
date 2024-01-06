#!/usr/bin/python3

class User(object):

    # public class variable
    population = 0

    def __init__(self, name, username, password, birthday):
        self.name = name
        self.username = username            # public instance variable
        self._password = password           # protected instance variable
        self.__birthday = birthday          # private instance variable

        # Increment number of users which each instance
        User.population += 1

    def delete(self):
        print("{}'s account is being deleted...".format(self.name))
        print("Successfully deleted account.")

        User.population -= 1

    def login(self):
        print("\nWelcome back {}.".format(self.name))
        print("How are you feeling today, {}?".format(self.username))

    def get_birthday(self):
        return self.__birthday

    def set_birthday(self, birthday):
        self.__birthday = birthday

    @classmethod
    def total_users(cls):
        print("\nWe have reached {:d} user(s)\n".format(cls.population))

if __name__ == "__main__":
    user1 = User(
            name = "Paul John",
            username = "starlit",
            password = "star20",
            birthday = "03-Oct"
            )

    user1.login()
    User.total_users()
    print(f"Your birthday is {user1.get_birthday()}")
    user1.set_birthday("22-March")
    print(f"You changed your birthday to {user1.get_birthday()}")
