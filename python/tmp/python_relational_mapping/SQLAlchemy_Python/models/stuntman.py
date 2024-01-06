#!/usr/bin/env python3
"""Stuntman for each Actor."""

from sqlalchemy import Column
from sqlalchemy import Integer, String, Boolean, ForeignKey
from sqlalchemy.orm import relationship, backref

from models.base import Base


class Stuntman(Base):
    """Defines Stuntman class"""
    __tablename__ = 'stuntmen'

    id = Column(Integer, primary_key=True, autoincrement=True)
    name = Column(String(50))
    active = Column(Boolean)
    actor_id = Column(Integer, ForeignKey('actors.id'))
    actor = relationship('Actor', backref=backref('stuntman', uselist=False))

    def __init__(self, name, active, actor):
        """Initializes an instance of Stuntman class.

        Args:
            name (str): Name of a stuntman.
            active (Boolean): Activity status.
            actor (str): Name of the actor of the stuntman
        """
        self.name = name
        self.active = active
        self.actor = actor

    def __repr__(self):
        return ("<Stuntman: (id={}, name='{}', active={}, actor='{}'>"
                .format(self.id, self.name, self.active, self.actor))
