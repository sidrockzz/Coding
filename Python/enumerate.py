#!/usr/bin/python3
l = [int(x) for x in input().split()]

for index, element in enumerate(l):
    if index%2 is not 0:
        print(element)