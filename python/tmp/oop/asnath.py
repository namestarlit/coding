#!/usr/bin/python3

class love(object):
    def __init__(self, name, age, weight, eyes_color,
                 fav_food, fav_color):
        self.name = name
        self.age = age
        self.weight = weight
        self.eyes_color = eyes_color
        self.fav_food = fav_food
        self.fav_color = fav_color

    def introduce(self):
        print(f"\nHi, meet my fine woman {self.name}")
        print(f"She's {self.age} years old")
        print(f"I love her {self.eyes_color} eyes and her lips")
        print(f"She weighs {self.weight} kilos and yet she has a physique of a goddess")
        print(f"Her favorite colors are {self.fav_color}")
        print(f"And she likes to eat {self.fav_food}\n")


my_woman = love(
        name = "Asnath",
        age = 22,
        weight = 57,
        eyes_color = "Brown",
        fav_food = ["wali maharage", "chips mayai"],
        fav_color = ["Pink", "Black", "White"]
        )

my_woman.introduce()
