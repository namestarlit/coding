#!/usr/bin/env python3
""""
Implementantion of Base class for the Bad Apples project
"""

import MySQLdb
import optparse
import sys
from os import getenv


# Define flag option system
opt = optparse.OptionParser()
opt.add_option('-i', '--insert', action='store_true',
               help='Perform MySQL INSERT operation', dest='insert')
opt.add_option('-u', '--update', action='store_true',
               help='Perform MySQL UPDATE operation', dest='update')
opt.add_option('-s', '--select', action='store_true',
               help='Perform MySQL SELECT operation', dest='select')
opt.add_option('-d', '--database', action='store', type='string',
               help='Specify name of the database', dest='database')
opt.add_option('-t', '--table', action='store', type='string',
               help='Specify name of the table on specified database',
               dest='table')
opt.add_option('-c', '--columns', action='store', type='string',
               help='Column(s) of the specified table of database',
               dest='columns')
opt.add_option('-v', '--values', action='store', type='string',
               help='Values to be processed', dest='values')

opt, args = opt.parse_args()

database = opt.database
table = opt.table
columns = opt.columns
values = opt.values

# Only one kind of statement type is allowed. If more than one is
# indicated, the priority of assignment is SELECT -> UPDATE -> INSERT.
if opt.select:
    statement_type = "select"
elif opt.update:
    statement_type = "update"
elif opt.insert:
    statement_type = "insert"
else:
    statement_type = ''


def connection(database):
    """Initiates connection to MySQL database

    Returns (obj): cursor
    """
    user = getenv('MYSQL_USER')
    password = getenv('MYSQL_PWD')
    host = getenv('MYSQL_HOST')
    db_env = getenv('MYSQL_DB')
    db = database if database is not None else db_env

    try:
        db_conn = MySQLdb.connect(host=host,
                                  user=user,
                                  passwd=password,
                                  db=db)
        cursor = db_conn.cursor()
        return cursor
    except MySQLdb.DatabaseError as e:
        print('An error was raised', e)


class MySQLStatement(object):
    """Defines a MySQLStatement class."""
    def __init__(self, kind=''):
        """Initializes an instance to form and execute a MySQL statement.
        Args:
            kind (str): Type of MySQL statement.
        """
        self.statement = []
        self.type = kind.lower()

        # List of supported MySQL Statements
        self.__supported_statements = ['SELECT', 'INSERT', 'UPDATE']

        if self.type != '':
            if self.type.upper() not in self.__supported_statements:
                print('{} statement is not supported.'.format(self.type))
                sys.exit(1)

    @property
    def supported_statements(self):
        return self.__supported_statements

    @property
    def type(self):
        if self.__type is None:
            return 'None'
        return self.__type

    @type.setter
    def type(self, kind):
        """Indicates the type of statement the instance is.

        Supported types are SELECT, INSERT, and UPDATE.
        This must be set before using any of the object methods

        Args:
            kind (str): type of MySQL statement
        """
        self.__type = kind.lower()

    def form(self, table, column, info):
        """Forms the MySQL statement according to the statement
        Args:
            table(str): Database table name
            column(str): Table column name
            info (str): Data to insert into table column(s)
        """
        # Extract data from info
        data = info.split(',')
        value = "'" + data[0]
        for i in range(1, len(data)):
            value += "', '" + data[i]
        value += "'"

        if self.type == 'select':
            statement = f"""
            SELECT * FROM {table} WHERE {column} = {value}
            """
            return statement
        elif self.type == 'insert':
            statement = f"""
            INSERT INTO {table}({column}) VALUES ({value})
            """
            return statement
        elif self.type == 'update':
            statement = f"""
            UPDATE {table} SET {column}='{data[0]}'
            WHERE {column}='{data[1]}'
            """
            return statement
        else:
            print(f"Operation not supported, ({self.type})")

    def execute(self, statement, table, cursor):
        while True:
            try:
                print("Executing SQL statement...\n", statement)
                cursor.execute(statement)
            except:
                print('an error was passed')
                raise
            else:
                if self.type == 'select':
                    output = cursor.fetchall()

                    results = ""
                    data = ""
                    for record in output:
                        for entry in record:
                            data += '\t' + str(entry)
                        data += '\n'
                    results += data + '\n'
                    return results
                elif self.type == 'insert':
                    results = """
                    Inserted information into your database
                    using SQL statement:\n {}""".format(statement)
                    return results
                elif self.type == 'update':
                    results = """
                    Updated information into your database
                    using SQL statement:\n{}""".format(statement)
                    return results


if __name__ == '__main__':
    cursor = connection(database)
    db = MySQLStatement()
    db.type = statement_type
    print(db.type)
    statement = db.form(table, columns, values)
    results = db.execute(statement, table, cursor)
    print('Results: \n', results)
    sys.exit(0)
