#!/usr/bin/python3

t = int(input())
for _ in range(t):
    n,m,s= list(map(int, input().strip().split()))
    print(((s-1+m-1)%n)+1)