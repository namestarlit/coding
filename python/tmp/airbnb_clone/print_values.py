#!/usr/bin/python3
"""
printing values passed to **kwargs
"""

def print_values(**kwargs):
    for key, value in kwargs.items():
        print(f"{key}: {value}")


if __name__ == '__main__':
    print_values(
            name="Starlit",
            her_name="Asnath",
            child_name="Genevieve",
            grand_father_name="John"
            )
