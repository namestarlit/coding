#!/usr/bin/env python3
"""A simple flask web application."""

from flask import Flask, render_template


app = Flask(__name__)

# Set strict_slashes off globally
app.url_map.strict_slashes = False

@app.route('/')
def hello_hbnb():
    return "Hello, HBNB!"

@app.route('/hbnb')
def hbnb():
    return "HBHB"

@app.route('/c/<text>')
def cisfun(text):
    return "C {}".format(text.replace('_', ' '))

@app.route('/python/')
@app.route('/python/<text>')
def python(text='is cool'):
    return "python {}".format(text.replace('_', ' '))

@app.route('/number/<int:n>')
def number(n):
    return "{} is a number".format(n)

@app.route('/number/<int:n>')

@app.route('/number_template/<int:n>')
def number_template(n):
    response = render_template('5-number.html', number=n)
    return response

@app.route('/number_odd_or_even/<int:n>')
def number_odd_or_even(n):
    response = render_template('6-number_odd_or_even.html', number=n)
    return response


if __name__ == '__main__':
    app.run(host='0.0.0.0', port=5000)
