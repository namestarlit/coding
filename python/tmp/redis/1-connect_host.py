#!/usr/bin/env python3
"""connect to redis server with host and port credentials"""
import redis


r = redis.Redis(host="localhost", port=6379);
print(r.ping())
