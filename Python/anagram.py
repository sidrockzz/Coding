#!/usr/bin/python3
str1 = input()
str2 = input()

if(sorted(str1)==sorted(str2)):
    print("They are anagram")
else:
    print("they are not")