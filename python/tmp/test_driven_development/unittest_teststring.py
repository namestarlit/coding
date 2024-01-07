#!/usr/bin/env python3
"""A unittest framework example module"""
import unittest


class TestStringMethods(unittest.TestCase):
    """Class to test string methods"""

    def test_upper(self):
        self.assertTrue('FOO'.isupper())
        self.assertFalse('Foo'.isupper())

    def test_split(self):
        s = 'hello world'
        self.assertEqual(s.split(), ['hello', 'world'])
        
        # Check that s.split() fails when separator is not a string
        with self.assertRaises(TypeError):
            s.split(2)


if __name__ == "__main__":
    unittest.main()
