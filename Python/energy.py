#!/usr/bin/python3
n,k = [int(x) for x in input().split()]
c = [ int(x) for x in input().split()]
energy = 100 
i = k % n 
energy -= c[i] * 2 + 1 
while i != 0:
    i = (i + k) % n
    energy -= c[i] * 2 + 1
print(energy)