#!/usr/bin/env python3
"""
A command-line MySQL INSERT statement utility
It inserts data into a database and table specified by the user
using flag options.
"""

import MySQLdb
import optparse
import getpass


# Auxiliary functions
def valid_digit(value):
    if value.isdigit():
        value = int(value)
    else:
        value = query(value, 'digit')
    return value


def valid_string(value):
    if value.isalpha():
        value = str(value)
    else:
        value = query(value, 'alpha')
    return value


def valid_table(choice, tables):
    valid_choice = valid_digit(choice)

    while valid_choice <= 0 or valid_choice > len(tables):
        print("Your table selection is invalid")
        valid_choice = query(valid_choice, 'digit')
    return valid_choice


def query(value, type):
    if (type == 'alpha'):
        print(f'The input {value} is invalid.')
        print("Please enter valid value")
        new_value = input("New value: ")
        new_value = valid_string(new_value)
        return new_value
    elif (type == 'digit'):
        print(f'The input {value} is invalid.')
        print("Please enter valid value")
        new_value = input("New value: ")
        new_value = valid_digit(new_value)
        return new_value
    else:
        return 1


# Set up the flag system
opt = optparse.OptionParser()
opt.add_option('-d', '--database', action='store',
               type='string', dest='database_name')
opt.add_option('-p', '--passwd', action='store',
               type='string', dest='user_password')
opt.add_option('-u', '--user', action='store',
               type='string', dest='username')
opt, args = opt.parse_args()

database = opt.database_name
passwd = opt.user_password
user = opt.username

# Testing the values passed by the user
while (user == '') or (user is None):
    print("This system is secured against anonymous logins.")
    user = getpass.getuser()

while (passwd == '') or (passwd is None):
    print("You must have a valid password to log into the database.")
    passwd = getpass.getpass()

while (database == '') or (database is None):
    print("We need the name of an existing database to proceed.")
    database = input("Please enter it here: ")

# Try to establish a database connection
try:
    db_conn = MySQLdb.connect(host='localhost',
                              user=user, passwd=passwd, db=database)
    cursor = db_conn.cursor()
    db_connected = True
except Exception:
    print("Invalid user credentials for the indicated database.")
    print("Please check your login details and try again")
    db_connected = False

# Showing the database tables
if db_connected:
    query_tables = "SHOW TABLES"
    cursor.execute(query_tables)
    tables = cursor.fetchall()

    print(f"\nTables available for {database} database:")
    print('----' * 9)
    for i in range(len(tables)):
        print("{}. {}".format(i + 1, tables[i][0]))
    print('----' * 9)

    table_choice = input("\nEnter the number of a table you would " +
                         "like to insert data into: ")

    table_no = valid_table(table_choice, tables)
    table = tables[table_no - 1][0]

    # showing the table structure if desired
    show_table_def = input("Would you like to see the database structure " +
                           f"of {table} table? (y/n) ")

    query_desc = f"DESCRIBE {table}"
    cursor.execute(query_desc)
    fields = cursor.fetchall()

    if 'y' in show_table_def.lower():
        from prettytable import PrettyTable
        tabledef = PrettyTable()

        field_names = ['Field', 'Type', 'Null', 'Key', 'Extra']
        tabledef.field_names = field_names

        for i in range(len(fields)):
            tabledef.add_row(
                    [fields[i][0], fields[i][1], fields[i][2],
                     fields[i][3], fields[i][5]])
        print(tabledef)

    # Accepting user input for the INSERT statement
    print("Enter the data you would like to enter into the table.")

    columns = []
    values = []

    for i in range(len(fields)):
        column = fields[i][0]
        value = input("Enter value for column {} ".format(fields[i][0]))
        columns.append(column)
        values.append('"{}"'.format(value))

    columns = ','.join(columns)
    values = ','.join(values)
    print(columns)
    print(values)

    # Building the INSERT statement query
    statement = f"""INSERT INTO {table} ({columns}) VALUES ({values})"""
    cursor.execute(statement)
    print("Data has been inserted using the statement:\n", statement)

    # Commiting changes and closing the database connection
    cursor.close()
    db_conn.commit()
    db_conn.close()
