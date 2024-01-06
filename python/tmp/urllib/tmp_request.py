#!/usr/bin/python3
"""This retrives a resource from URL and saves it in a temporary file"""

from urllib import request
import shutil
import tempfile


with request.urlopen('http://localhost/') as response:
    with tempfile.NamedTemporaryFile(delete=False) as tmp_file:
        shutil.copyfileobj(response, tmp_file)

with open(tmp_file.name) as html:
    print(html.read())
