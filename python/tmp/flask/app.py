#!/usr/bin/env python3
"""A minimal application."""

from flask import Flask, url_for, render_template
from markupsafe import escape


app = Flask(__name__)

@app.route('/')
def index():
    return "<h1>Home page</h1>"

@app.route('/<name>')
def hello(name=None):
    return render_template('hello.html', name=name)

@app.route('/login')
def login():
    return "login"

@app.route('/user/<username>')
def profile(username):
    return f"{escape(username)}'s profile"


if __name__ == '__main__':
    app.run(debug=True)
