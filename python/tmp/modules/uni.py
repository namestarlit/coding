#!/usr/bin/python3

from datetime import date

his_name = "Paul"
her_name = "Asnath"

his_birth = date(2000, 10, 3)
her_birth = date(2001, 3, 22)
now = date.today()

his_age = now - his_birth
her_age = now - her_birth
his_age = his_age.days
her_age = her_age.days

print(f"{his_name} has lived {his_age} days")
print(f"That's {his_age // 365} years\n")

print(f"{her_name} has lived {her_age} days")
print(f"That's {her_age // 365} years\n")

if his_age > her_age:
    print(f"{his_name} is {his_age - her_age} days older than {her_name}.")
else:
    print(f"{her_name} is {her_age - his_age} days older than {his_name}.")
