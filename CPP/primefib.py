def prime(n1, n2):
    l1 = list()
    for n in range(n1,n2+1):
        for i in range(2,n):
            if n%i == 0:
                break
        else:
            l1.append(n)
    return l1
n1, n2 = map(int, input().split())


l1 = prime(n1,n2)

l2 = list()
l = len(l1)
for i in range(l):
    for j in range(l):
        if i == j:
            continue
        l2.append(str(l1[i])+str(l1[j]))

l3 = prime(int(l2[0]),int(l2[-1]))

l4 = []
for i in l3:
    if str(i) in l2:
        l4.append(i)

x = min(l4)
y = max(l4)
count = len(l4)

for i in range(2,count):
    f = x + y
    x = y
    y = f
print(y)