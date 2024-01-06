#!/usr/bin/env python3
"""Contains module of the Movie class."""

from sqlalchemy import Table, Column
from sqlalchemy import Integer, String, Date, ForeignKey
from sqlalchemy.orm import relationship
from models.base import Base


# Create a Relation table for the actors and movies tables.
movies_actors_association = Table(
        'movies_actors', Base.metadata,
        Column('movie_id', Integer, ForeignKey('movies.id')),
        Column('actor_id', Integer, ForeignKey('actors.id'))
        )


class Movie(Base):
    """Defines Movie class."""
    __tablename__ = "movies"

    id = Column(Integer, primary_key=True, autoincrement=True)
    title = Column(String(50))
    release_date = Column(Date)
    actors = relationship('Actor', secondary=movies_actors_association)

    def __init__(self, title, release_date):
        """Initializes an instance of Movie class.

        Args:
            title (str): Title of the movie
            release_date (datetime): The date the movie was released.
        """
        self.title = title
        self.release_date = release_date

    def __repr__(self):
        return ("<Movie(id={}, title='{}', release_date='{}')>"
                .format(self.id, self.title, self.release_date))
