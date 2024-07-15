#!/usr/env/bin python3
import psycopg2
from config import load_config


def connect(config):
    """Connects to the PostgreSQL database server"""
    try:
        # connecting to the PostgreSQL server
        with psycopg2.connect(**config) as conn:
            print("connected to the PostgreSQL server")
            return conn
    except (psycopg2.DatabaseError, Exception) as error:
        print(error)


if __name__ == "__main__":
    config = load_config()
    connect(config)
