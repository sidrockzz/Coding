n = int(input())
d= [int(x) for x in str(n)]
count =0
for i in d:
    if i ==0:
        pass
    elif n % i ==0:
        count+=1

print(count)