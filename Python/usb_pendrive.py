#!/usr/bin/python3
n = int(input())
keyboards = [ int(x) for x in input().split()]
drive = [ int(x) for x in input().split()]
placed = []
for i in keyboards:
    for j in drive:
        sum1 = i+j
        if sum1<n:
            placed.append(sum1)

if len(placed)==0:
    print(-1)
else:
    print(max(placed))