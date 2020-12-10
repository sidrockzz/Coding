#!/usr/bin/python3
lst = list(map(int, input().strip().split(' ')))
print(lst.count(max(lst)))