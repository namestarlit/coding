#!/usr/bin/env python3
"""Contact Details of Actors."""

from sqlalchemy import Column
from sqlalchemy import Integer, String, ForeignKey
from sqlalchemy.orm import relationship

from models.base import Base


class ContactDetails(Base):
    """Defines ContactDetails class."""
    __tablename__ = "contact_dtails"

    id = Column(Integer, primary_key=True, autoincrement=True)
    phone_number = Column(String(25))
    address = Column(String(50))
    actor_id = Column(Integer, ForeignKey('actors.id'))
    actor = relationship('Actor', backref='contact_details')

    def __init__(self, phone_number, address, actor):
        """Initializes an instance of ContactDetails.

        Args:
            phone_number (str): Phone number of the actor.
            address (str): Address of the actor.
            actor (str): Name of the actor.
        """
        self.phone_number = phone_number
        self.address = address
        self.actor = actor

    def __repr__(self):
        return ("<ContactDetails: (id={}, actor='{}', address='{}', "
                "phone_number='{}'>,".format(self.id, self.actor, self.address,
                                             self.phone_number))
