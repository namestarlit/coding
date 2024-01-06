#!/usr/bin/python3

import json


class ComplexEncoder(json.JSONEncoder):

    def default(self, obj):
        if isinstance(obj, complex):
            return [obj.real, obj.imag]
        # Let the base class default method raise the TypeError
        return json.JSONEncoder.default(self, obj)


tmp = json.dumps(2 + 1j, cls=ComplexEncoder)
print(tmp)

tmp = ComplexEncoder().encode(2 + 1j)
print(tmp)

tmp = list(ComplexEncoder().iterencode(2 + 1j))
print(tmp)
