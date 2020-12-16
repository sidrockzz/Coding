#!/usr/bin/python3
import math
a,b = [int(x) for x in input().split()]
count = math.floor(math.sqrt(b)) - math.floor(math.sqrt(a - 1))
print(count)