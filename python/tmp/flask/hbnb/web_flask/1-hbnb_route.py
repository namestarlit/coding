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


if __name__ == '__main__':
    app.run(host='0.0.0.0', port=5000)
