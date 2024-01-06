#!/usr/bin/env python3
"""Implementing Python Object Relational Mapping.

using SQLAlchemy module and MySQLdb driver to interact with
MySQL database.
"""

from os import getenv
from sqlalchemy import create_engine, URL
from sqlalchemy.orm import declarative_base
from sqlalchemy.orm import sessionmaker, scoped_session


DB_URL = URL.create(
        "mysql+mysqldb",
        username = getenv('MYSQL_USER'),
        password = getenv('MYSQL_PWD'),
        host = getenv('MYSQL_HOST'),
        database = getenv('MYSQL_DB')
        )

# Create SQLAlchemy Engine, Session factory
# And wrap Session factory in a scoped_session to get thread-safe sessions.
engine = create_engine(DB_URL, pool_recycle=3600, echo=True)
Session = sessionmaker(bind=engine)
DBSession = scoped_session(Session)

# Create Base class for classes definitions.
Base = declarative_base()
