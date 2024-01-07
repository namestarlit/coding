#!/usr/bin/env python3
"""Demonstrating using the unittest.mock module"""
from unittest.mock import MagicMock
from unittest.mock import Mock


thing = ProductionClass()
thing.method = MagicMock(return_value=3)
thing.method(3, 4, 5, key='value')

thing.method.assert_called_with(3, 4, 5, key='value')

# side_effect allow you to perfom side effects, including raising
# an exeception when a mock is called.
mock = Mock(side_effect=KeyError('foo'))
mock()  # raises KeyError

values = {"a": 1, "b": 2, "c": 3}
def side_effect(arg):
    return values[arg]

mock.side_effect = side_effect
mock("a"), mock("b"), mock("c")

mock.side_effect = [5, 4, 3, 2, 1]
mock(), mock(), mock()

from unittest.mock import patch
@patch("module.ClassName2")
@patch("module.ClassName1")
def test(MockClass1, MockClass2):
    module.className1()
    module.className2()
    assert MockClass1 is module.className1
    assert MockClass2 is module.ClassName2
    assert MockClass1.called
    assert MockClass2.called

test()
