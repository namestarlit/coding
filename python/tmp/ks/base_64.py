#!/usr/bin/env python3
"""base64 module"""
import base64


# base64 encoding
encoded = base64.b64encode(b"username:password")
print(encoded)

# base64 decoding
decoded = base64.b64decode(encoded)
print(decoded)
