#!/usr/bin/env python3
"""ZODB Database connection"""
import ZODB, ZODB.FileStorage


storage = ZODB.FileStorage.FileStorage("data_0.fs")
db = ZODB.DB(storage)
connection = db.open()
root = connection.root

# short-hans for database connection

# You can pass the database file name direct to ZODB.DB and it will create the file for You
db = ZODB.DB("data_1.fs")
# You can pass None to create an in memory database
memory_db = ZODB.DB(None)

# If you are only going to use a single connection, you can pass the database file name to connection
connection = ZODB.connection("data_2.fs")
# You can pass None to initiate a single connection in-memory database
memory_connection = ZODB.connection(None)
