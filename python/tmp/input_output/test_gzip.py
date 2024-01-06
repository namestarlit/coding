#!/usr/bin/python3

import gzip

with gzip.open('out.log.gz', mode='wb') as z_file:
    z_file.write("A nine mile walk is no joke, especially in the rain.".encode('utf-8'))
