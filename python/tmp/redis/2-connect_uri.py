#!/usr/bin/env python3
"""connect to a redis server using url"""
import redis


r = redis.from_url("redis://localhost:6379")
print(r.ping())
