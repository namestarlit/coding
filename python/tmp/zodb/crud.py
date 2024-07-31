#!/usr/bin/env python3
"""Simple ZODB CRUD application"""
import transaction
from ZODB import DB 
from ZODB.FileStorage import FileStorage
from persistent import Persistent 
from BTrees.OOBTree import OOBTree


# setup
storage = FileStorage("db.fs")
db = DB(storage)
connection = db.open()
root = connection.root()


# Persistent class 
class MyData(Persistent):
    def __init__(self, name, value):
        self.name = name
        self.value = value

# Create and store objects
root['data'] = OOBTree()
root['data']['item1'] = MyData('Item 1', 'Value 1')
transaction.commit()

# Read objects
print(root['data']['item1'].name)

# Update objects
root['data']['item1'].value = 'Updated value 1'
transaction.commit()

# Delete objects
del root['data']['item1']
transaction.commit()

# cleanup
connection.close()
db.close()
storage.close()
