#!/usr/bin/python3
"""
datetime module demonstration.
"""

from datetime import datetime
from datetime import timedelta

# Check today's date.
date_now = datetime.now()
print(type(date_now))
print(date_now)

# Check tomorrow's date and time.
date_tomorrow = date_now + timedelta(days=1)
print(date_tomorrow)

# Storing date and time.
a_dict = { 'my_date': date_now }
print(type(a_dict['my_date']))
print(a_dict)

# Format time using strftime
print(date_now.strftime("%A"))
print(date_now.strftime("%A %d %B %Y at %H:%M:%S"))

# Restroring the date in a dictionary
b_dict = { 'my_date': date_now.strftime("%A of %Y-%m-%d at %H:%M:%S") }

for key, time in b_dict.items():
    print(time)
