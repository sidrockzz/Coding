#!/usr/bin/python3
lst = list(map(int, input().strip().split(' ')))
n = len(lst)
count = [0]*n
for t in lst:
    count[t]+=1
print(count.index(max(count)))