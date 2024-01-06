#!/usr/bin/env python3
"""A simple flask web application."""

from flask import Flask


app = Flask(__name__)

@app.route('/', strict_slashes=False)
def hello_hbnb():
    return "Hello, HBNB!"

@app.route('/hbnb', strict_slashes=False)
def hbnb():
    return "HBHB"

@app.route('/c/<text>', strict_slashes=False)
def cisfun(text):
    return "C {}".format(text.replace('_', ' '))

@app.route('/python/', strict_slashes=False)
@app.route('/python/<text>', strict_slashes=False)
def python(text='is cool'):
    return "python {}".format(text.replace('_', ' '))

@app.route('/number/<int:n>')
def number(n):
    return "{} is a number".format(n)


if __name__ == '__main__':
    app.run(host='0.0.0.0', port=5000)
