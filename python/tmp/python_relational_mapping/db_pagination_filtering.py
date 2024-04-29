#!/usr/bin/env python3
"""Implemeting database-level pagination and filtering"""
from sqlalchemy import create_engine
from sqlalchemy.orm import sessionmaker
from models import YourModel

engine = create_engine("sqlite:///your_database.db")
Session = sessionmaker(bind=engine)
session = Session()

page_number = 1
items_per_page = 10
query = (
    session.query(YourModel)
    .filter(YourModel.column_name == "value")
    .order_by(YourModel.column_name)
)
pagination_result = query.paginate(page=page_number, per_page=items_per_page)

query = session.query(YourModel)


def filter(query, column_name, value):
    query.filter(column_name == "value")


def paginate(query, page_number: int = 1, items_per_page: int = 10):
    paginated_result = query.paginate(page=page_number, per_page=items_per_page)
