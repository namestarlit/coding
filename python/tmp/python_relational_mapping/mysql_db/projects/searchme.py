#!/usr/bin/env python3
"""
Command-line search utility which allows users
to pass queries through the command line to search in a databse.
"""

import MySQLdb
import optparse


# Initiate connection to the database.
db_conn = MySQLdb.connect(host='localhost', user='starlit',
                          passwd='starlit.22', db='menu')
cursor = db_conn.cursor()

# Parse command-line arguments
opt = optparse.OptionParser()
opt.add_option('-t', '--table', action='store',
               type='string', dest='table_name')
opt.add_option('-f', '--format', action='store_true',
               dest='table_format')
opt.add_option('-q', '--query', action='store',
               type='string', dest='query_expr')
opt, args = opt.parse_args()

# Assign options to variables
table_name = opt.table_name
table_format = opt.table_format
column_name = 'name'
like_expr = opt.query_expr

# Execute the query statement
statement = f"""
SELECT * FROM {table_name} WHERE {column_name} LIKE '{like_expr}'
"""
print(statement)
cursor.execute(statement)
results = cursor.fetchall()

# Process results from the query
column_list = []
for record in results:
    column_list.append(record[0:])

if table_format is True:
    columns_query = f'DESCRIBE {table_name}'
    cursor.execute(columns_query)
    headers = cursor.fetchall()

    column_list = []
    for header in headers:
        column_list.append(header[0])

    output = ''
    print(('=====' * 10) + '\n')
    print('\t '.join(column_list[0:]))
    for record in results:
        print(f'{record[0]} \t{record[1]} \t {record[2]}')

else:
    output = []
    for record in results:
        output.append(record)
    for row in output:
        print(f'{row[1]}\t @ {row[2]} each')

# Close connection to database
cursor.close()
db_conn.close()
