#!/usr/bin/env python3
"""The Actor class that defines actors."""

from sqlalchemy import Column
from sqlalchemy import Integer, String, Date
from models.base import Base


class Actor(Base):
    """Defines the Actor class."""
    __tablename__ = "actors"

    id = Column(Integer, primary_key=True, autoincrement=True)
    name = Column(String(50))
    birthday = Column(Date)

    def __init__(self, name, birthday):
        """Initializes an instance of Actor class.

        Args:
            name (str): Name of the actor
            birthday (datetime): Date of birth of the Actor.
        """
        self.name = name
        self.birthday = birthday

    def __repr__(self):
        return ("<Actor: (id={}, name='{}', birthday='{}')>"
                .format(self.id, self.name, self.birthday))
