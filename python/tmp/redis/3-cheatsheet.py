#!/usr/bin/env python3
"""Redis commands cheatsheet using redis-py

References:
    ----------------------------------------------------------------------------
    Redis Setup: https://developer.redis.com/howtos/quick-start/#setup-redis
    Redis Python client: https://redis-py.readthedocs.io/en/stable/
    Redis Cheatsheet: https://developer.redis.com/howtos/quick-start/cheat-sheet/
    ----------------------------------------------------------------------------

"""
import redis
import time

## connect to Redis

# connect to redis server using the redis.Redis() constructor
r = redis.Redis(
    host="localhost",  # conncet on the localhost
    port=6379,  # connect via the default redis port
    db=0,  # connect on the default database
    decode_responses=True,  # decode responses from binary to string
)

# check if the connection has been established successfully
print(r.ping())
print()

## working with strings and numbers

# SET key value
# O(1)
# set key to hold the string value. If a key already holds a value
# it's overwritten ragerdless of its type
r.set("key1", "Hello")
r.set("key2", "Redis")

# GET key
# O(n)
# get the string value of a key. if the key does not exist
# a special value 'nil' is returned
res1 = r.get("key1")
res2 = r.get("key2")
print(res1, res2)

# get a non-existing key
res = r.get("not_here")
print(res)  # returns 'None'
print()

# MGET key, [key ...]
# O(n)
# returns the values of all specified keys. if a key does not hold a value
# or does not exist, 'nil' will be returned
res = r.mget(["key1", "key2", "not_here"])
print(f"values: {res}")

# write keys into a list and pass it as a parameter
keys = ["key", "key1", "key2", "another_nil", "key2"]
res = r.mget(keys)
print(f"values: {res}")
print()

# INCR key
# O(1)
# incriment a number stored at a key by one.
# if the key does not exist, it's set to 0 before peforming the operation
r.incr("num", 1)  # incrment a nonexistant key
res = r.get("num")  # return 1
print(res)

# delete an existing key
r.delete("key1")

# increment a value by 5, 5 times
for _ in range(5):
    r.incr("key1", 5)
    res = r.get("key1")
    print(res)
print()

# KEYS pattern
# O(n)
# returns all keys matching pattern
keys = r.keys("*")  # match any key pattern
print(f"keys: {keys}")

# EXPIRE key seconds
# O(1)
# set a timeout on key. the key will be deleted automatically
# when the timeout expires
r.expire("key1", 2)
for _ in range(2):
    print(r.get("key1"))
    time.sleep(4)
print()

# SCAN cursor [MATCH pattern] [COUNT count]
# O(1) for every call. O(n) for complete iteration
# including enough commands for the cursor to return back to 0.
# iterates the set of keys in the currently selected database.
r.delete("key", "key1", "key2", "num")
print(r.keys())  # returns an empty list at first

# create some keys
r.set("user:name", "starlit")
r.set("user:age", 23)
r.set("user:bio", "Software Engineer")
# scan keys starting with 'user:' pattern
scan_res = r.scan(0, match="user:*")
print(scan_res)
print(type(scan_res))

# get values of specified keys
for key in scan_res[1]:
    print("{} -> {}".format(key, r.get(key)))
print()

# TTL key
# O(1)
# returns the remaining time to live of a key that has a timeout
r.expire("user:age", 3)
for _ in range(4):
    print(r.ttl("user:age"))  # returns -2 when a key expires
    time.sleep(1)
print()

# INFO [section ...]
# O(1)
# returns information and statistics about the server,
# with the following sections:
# server, clients, memory, persistence, stats, replication, cpu,
# commandstats, latencystats, sentinel, cluster, modules, keyspace, errorstats
info = r.info("keyspace", "stats")
# info is returned as a dict
print(type(info))

for key, value in info.items():
    print(f"{key}: {value}")
print()

# FLUSHALL [ASYNC|SYNC]
# O(n)
# removes all keys from all databases
r.flushall()
print("keys count: {}".format(len(r.keys())))
print()


# working with hashes

# HSET key field value [field value ...]
# O(n)
# sets the specified fields to their respective values in the hash stored at key
r.hset("h_employee_profile:nicol", "name", "Nicol")
r.hset("h_employee_profile:nicol", "gender", "Female")
r.hset("h_employee_profile:nicol", "age", 25)

# HGETALL key
# O(n)
# returns all fields and values of the hash stored at key
res = r.hgetall("h_employee_profile:nicol")
print(type(res))  # returns a data as a dict

# print the data results
for key, value in res.items():
    print(f"{key}: {value}")

# HGET key field
# O(1)
# returns the value associated with the field in the hash stored at key
res = r.hget("h_employee_profile:nicol", "name")
print(res)

# working with sets

# SADD key member [member ...]
# O(n)
# add the specified member to the set stored at key
r.sadd("morning", "ohayo")

# sorted sets

# ZADD key score member [score member ...]
# O(log(n))
# adds all the specified members with the specified scores
# to the sorted set stored at key
r.zadd("numbers", {"one": 1, "two": 2, "three": 3})

# ZRANGE key start stop [WITHSCORES]
# O(log(n) + m)
# returns the specified range of elements in the sorted set stored at key
res1 = r.zrange("numbers", 0, -1, withscores=True)
res2 = r.zrange("numbers", 0, -1)
print(type(res1))
print(res1)
print(res2)

# print memebers of the set with their scores
for element in res1:
    print("memeber: {}, score: {}".format(element[0], element[1]))
print()


# working with lists

# LPOP key [count]
# O(n)
# removes and returns the first element(s) of the list stored at key
r.rpush("groups", "ushi", "gakusei", "bengoshi", "yasashii")  # add to the end of list
r.lpush("groups", "kudasai", "arigatoo")  # add to the front of the list
r.lpop("groups")  # remove the first element in the list
r.lpop("groups", 2)  # remove first two element in the list
r.rpop("groups")  # remove the last element in the list

# LRANGE key start stop
# O(s+n)
# returns the specified elements of the list stored at key
res1 = r.lrange("groups", 0, -1)  # return all elements of the list
res2 = r.lrange("groups", 3, -1)  # returns from index 3 to the last element of the list
print(type(res1))
print(res1)

# LPUSH key element [element ...]
# O(n)
# inserts specified values at the head of the list stored at key
r.lpush("groups", "isha", "sensei", "kunoichi", "hito")
res = r.lrange("groups", 0, -1)
print(res)
print()

# delete the whole list
r.delete("groups")


# working with streams

# XADD key field value [field value ...]
# O(1) for new entries, O(n) when trimming where 'n' is the number of evicted values
# appends the specified stream entry to the stream stored at the specified key
r.xadd("temperatures:us-ny:10007", {"temp_f": 87.2, "pressure": 29.69, "humidity": 46})
r.xadd(
    "temperatures:us-ny:10007", {"temp_f": 83.1, "pressure": 29.21, "humidity": 46.5}
)
r.xadd(
    "temperatures:us-ny:10007", {"temp_f": 81.9, "pressure": 28.37, "humidity": 43.7}
)

# XREAD [COUNT count] [BLOCK milliseconds] STREAMS key [key ...] ID [ID ...]
# read data from one or multiple streams, only returning entries with an ID greater
# than the last received ID reported by the caller
res = r.xread({"temperatures:us-ny:10007": "0-0"})
print(type(res))
print(res)
print()
for stream in res:
    print(stream)  # print the stream

# working with json

# JSON.SET key path value
# O(M+N) where M is the original size and N is the new size
# Set the JSON value at path in key.
r.json().set(
    "employee_profile:nicol",
    ".",
    {"name": "nicol", "age": 24, "single": True, "skills": []},
)
r.json().set("employee_profile:nicol", "$.name", "Nicol")

# JSON.GET key [path [path ...]]
# O(N)
# Return the value at path in JSON serialized form
r.json().get("employee_profile:nicol", ".")

# JSON.ARRAPPEND key [path] value [value ...]
# O(1) for each value added, O(N) for multiple values added where N is the size of the key
# Append the value(s) to the array at path in key after the last element in the array.
r.json().set("employee_profile:nicol", "$.skills", [])
r.json().arrappend("employee_profile:nicol", "$.skills", "python")
r.json().get("employee_profile:nicol", "$.skills")

# JSON.ARRINDEX key path value [start [stop]]
# O(N)
# Search for the first occurrence of a JSON value in an array.
r.json().arrindex("employee_profile:nicol", "$.skills", "python")
r.json().arrindex("employee_profile:nicol", "$.skills", "java")

# search and query

try:
    r.ft("idx-employees").dropindex()
except:
    pass

# FT.CREATE index [ON HASH | JSON] [PREFIX count prefix [prefix ...]]
# SCHEMA field_name [AS alias] TEXT | TAG | NUMERIC | GEO | VECTOR |
# GEOSHAP [SORTABLE [UNF]] [NOINDEX] [ field_name [AS alias] TEXT | TAG |
# NUMERIC | GEO | VECTOR | GEOSHAPE [ SORTABLE [UNF]] [NOINDEX] ...]
# O(K) where K is the number of fields in the document, O(N) for keys in the keyspace
# Creates a new search index with the given specification.
schema = (
    TextField("$.name", as_name="name", sortable=True),
    NumericField("$.age", as_name="age", sortable=True),
    TagField("$.single", as_name="single"),
    TagField("$.skills[*]", as_name="skills"),
)

r.ft("idx-employees").create_index(
    schema,
    definition=IndexDefinition(prefix=["employee_profile:"], index_type=IndexType.JSON),
)

# FT.INFO index
# O(1)
# Return information and statistics on the index.
r.ft("idx-employees").info()

# FT.SEARCH index query
# O(N)
# Search the index with a textual query, returning either documents or just ids
r.ft("idx-employees").search("Nicol")
r.ft("idx-employees").search("@single:{false}")
r.ft("idx-employees").search("@skills:{python}")
r.ft("idx-employees").search(Query("*").add_filter(NumericFilter("age", 30, 40)))
r.json().arrappend("employee_profile:karol", "$.skills", "python", "java", "c#")
r.ft("idx-employees").search(Query("@skills:{java}, @skills:{python}"))

# FT.AGGREGATE index query
# O(1)
# Run a search query on an index, and perform aggregate transformations on the results
# extracting statistics etc from them
r.ft("idx-employees").aggregate(
    aggregations.AggregateRequest("*")
    .group_by("@age", reducers.count().alias("count"))
    .sort_by("@age")
).rows

r.ft("idx-employees").aggregate(
    aggregations.AggregateRequest("@skills:{python}").group_by(
        "@skills", reducers.tolist("@name").alias("names")
    )
).rows
