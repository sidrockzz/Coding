#!/usr/bin/python3
import sys
n,k,q = [int(x) for x in input().split()]
lst = [int(x) for x in input().split()]

for _ in range(q):
    x = int(sys.stdin.readline())
    print(lst[x-k]%n)
