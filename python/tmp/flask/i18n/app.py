#!/usr/bin/env python3
"""main application file

This code is part of a one bigger flask tutorial
and it won't make sense and don't try to make sense out of it."""
from flask import app
from flask_babel import _
from flask_babel import lazy_gettext as _l


# Mark text for translation
flask(_("Your post is noe live"))
# with dynamic variables
flash(_("User %(username)s not found.", username=username))

class LoginForm(FlaskForm):
    username = StringField(_l("Username"), validators=[DataRequired()])

# The Flask-Login extension flashes a message every time it redirects
# the user to the login page which is in English. We need to handle that
# and make sure it's translated by overriding it
login = LoginManager(app)
login.login_view = "login"
login.login_message = _l("Please log in to access this page");
