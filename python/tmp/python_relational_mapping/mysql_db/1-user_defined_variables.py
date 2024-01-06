#!/usr/bin/env python3
"""
Using user defined variables to write SQL Queries.
"""

import MySQLdb
import sys


db_conn = MySQLdb.connect(host='localhost', user='starlit', passwd='starlit.22', db='menu')
cursor = db_conn.cursor()

if len(sys.argv) != 2:
    print('Usage: {} <price>'.format(sys.argv[0]))
    sys.exit(1)

price = sys.argv[1]
sql = 'SELECT * FROM fish WHERE price < {}'.format(price)
cursor.execute(sql)
result = cursor.fetchall()

for record in result:
    print('{} --> {} @ {}'.format(record[0], record[1], record[2]))

cursor.close()
db_conn.close()
