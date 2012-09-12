#!/usr/bin/python2
#
# Filename:      week3.py
# Author:        Junwei Wang(wakemecn@gmail.com)
# Last Modified: 2012-09-12 21:05
# Description:
#
#

import os
from Crypto.Hash import SHA256

def hash_sth(sth):
    h = SHA256.new()
    h.update(sth)
    return h.digest()

def compute_hash(filename):
    b_size = 1024

    f_size = os.path.getsize(filename)
    f_blocks = f_size / b_size 
    last_size = f_size % b_size

    f = open(filename, 'r')

    if last_size == 0:
        f.seek((-1) * b_size, 2)
        content = f.read(b_block)
        res = hash_sth(content)
        f.seek((-1) * b_size, 1)
        
        f_blocks -= 1;
    else:
        f.seek((-1) * last_size, 2)
        content = f.read(last_size)
        res = hash_sth(content)
        f.seek((-1) * last_size, 1)

    for i in range(f_blocks, 0, -1):
        f.seek((-1) * b_size, 1)
        content = f.read(b_size)
        res = hash_sth(content + res)
        f.seek((-1) * b_size, 1)

    print res.encode('hex')
    f.close()
    

if __name__ == '__main__':
    f_name = "goal.mp4"
    compute_hash(f_name)
