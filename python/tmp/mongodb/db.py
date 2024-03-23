#!/usr/bin/env python3
"""Creating a MongoDB database in Python"""
from pymongo import MongoClient


def get_database():
    """Get MongoDB database"""
    # create database connection string
    DB_URI = "mongodb://localhost:27027/"

    # connect to MongoDB using the DB_URI
    client = MongoClient(DB_URI)

    # Create a new database 'test_db'
    db = client.test_db

    # return the new database
    return db
    

if __name__ == "__main__":
    db = get_database()
    print(db)
