#!/usr/bin/python3
n = int(input())
socks = list(map(int, input().strip().split(' ')))
pairs = 0

for element in set(socks):
	pairs += socks.count(element) // 2
print(pairs)