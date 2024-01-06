#!/usr/bin/python3
"""
test_cal.py

Unit Test file for cal.py module.
"""

import unittest
from cal import add, subtract, multiply, divide


class TestCal(unittest.TestCase):

    def test_add(self):
        self.assertEqual(add(10, 2), 10 + 2)
        self.assertEqual(add(10.2, 2), 10.2 +2)
        self.assertEqual(add(-2, 30), -2 + 30)

        self.assertRaises(TypeError, add, 'a', 'b')

    def test_subtract(self):
        self.assertEqual(subtract(10, 2), 10 - 2)
        self.assertEqual(subtract(10.2, 2), 10.2 - 2)
        self.assertEqual(subtract(-2, 30), -2 - 30)
        
        self.assertRaises(TypeError, subtract, 'a', 'b')

    def test_multiply(self):
        self.assertEqual(multiply(10, 2), 10 * 2)
        self.assertEqual(multiply(10.2, 2), 10.2 * 2)
        self.assertEqual(multiply(-2, 30), -2 * 30)

        self.assertRaises(TypeError, multiply, 'a', 'b')

    def test_divide(self):
        self.assertEqual(divide(10, 2), 10 / 2)
        self.assertEqual(divide(10.2, 2), 10.2 / 2)
        self.assertEqual(divide(-2, 30), -2 / 30)

        self.assertRaises(ZeroDivisionError, divide, 10, 0)
        self.assertRaises(TypeError, divide, 'a', 'b')


if __name__ == "__main__":
    unittest.main()
