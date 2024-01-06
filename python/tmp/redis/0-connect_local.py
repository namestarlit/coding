#!/usr/bin/env python3
"""connecting to redis at localhost with the default port"""
import redis

# connect to redis at localhost
r = redis.Redis()
print(r.ping())
