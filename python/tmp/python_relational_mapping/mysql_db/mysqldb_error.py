#!/usr/bin/env python3
"""
Handling exceptions in MySQL for Python
"""

import MySQLdb


db_conn = MySQLdb.connect(host='localhost', user='starlit',
                          passwd='starlit.me', db='menu')
cursor = db_conn.cursor()

try:
    cursor.execute("SELECT * FROM fish WHERE id = 7a")
    result = cursor.fetchall()
except:
    print("An error was passed.")
