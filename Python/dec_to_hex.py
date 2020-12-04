n = int(input())
hexa = ['A','B','C','D','E','F']
ctr=0
res=""
while n>0:
    rem = n%16
    if rem<=9:
        res = res+str(rem)
    else:
        res = res+hexa[rem-10]
    n//=16
result = res[::-1]
print(result)