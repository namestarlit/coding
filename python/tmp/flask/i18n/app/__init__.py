#!/usr/bin/env python3
"""init module for the flask app"""
from flask import Flask, request
from flask_babel import Babel


def get_locale():
    """Gets the user's locale"""
    return request.accept_languages.best_match(app.config["LANGUAGES"])

app = Flask(__name__)
babel = Babel(app, locale_selector=get_Locale)
