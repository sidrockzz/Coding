#!/usr/bin/python3
n= int(input())
s = input()
t = input()

count = 0

for (char_s,char_t) in zip(s,t):
    if char_s==char_t:
        count+=1
    else:
        break

length = len(s) + len(t)

if (2*count+n>= length and length%2==n%2) or length<n:
    print("Yes")
else:
    print("No")