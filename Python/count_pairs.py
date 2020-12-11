#!/usr/bin/python3
key = int(input())
lst = list(map(int, input().strip().split(' ')))
n = len(lst)
count = 0

for i in range(0,n-1):
    for j in range(i+1,n):
        if ((i<j)and (lst[i]+lst[j])%key==0):
            count+=1

print("*"*20)
print(count)