#!/usr/bin/env python3
"""
Integrity Error.
Insert data with and existing id into the database.
"""

import MySQLdb
from os import getenv
import sys


db_conn = MySQLdb.connect(host='localhost',
                          user=getenv('MYSQL_USER'),
                          passwd=getenv('MYSQL_PWD'),
                          db='menu')
cursor = db_conn.cursor()

if len(sys.argv) != 4:
    print("Usage: {} <id> <fish_name> <fish_price>".format(sys.argv[0]))
    sys.exit(1)
else:
    # Get Values from shell arguments
    ident = int(sys.argv[1])
    fish = sys.argv[2]
    price = float(sys.argv[3])


statement = f"""
INSERT INTO fish (id, name, price)
VALUES ({ident}, '{fish}', {price})"""

cursor.execute(statement)

# Closing connection and commit changes
cursor.close()
db_conn.commit()
db_conn.close()
