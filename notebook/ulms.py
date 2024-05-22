from os import getenv

import pandas as pd
from sqlalchemy import create_engine, URL

DATABASE_URL = URL.create(
    "mysql+mysqldb",
    username=getenv("MYSQLDB_USR"),
    password=getenv("MYSQLDB_PWD"),
    host="localhost",
    database="ulms",
)

engine = create_engine(DATABASE_URL)
table = "ACCOUNT"
query = f"SELECT * FROM {table}"

df = pd.read_sql(query, engine)
print(df)
