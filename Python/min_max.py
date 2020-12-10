#!/usr/bin/python3
lst = list(map(int, input().strip().split(' ')))
x = sum(lst)
print (x-(max(lst)), (x-(min(lst))))