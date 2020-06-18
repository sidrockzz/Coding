n = int(input("Enter a number of n: "))
for i in range(n):
    print(" "*(n-i-1)+"* ",end="")
    if i>=1:
        print(" "*(2*i-1)+"* ",end="")
    print()
for i in range(n):
    print(" "*i,"* ",end='')
    if i!= n-1:
        print(" "*(2*n-2*i-3)+"* ",end="")
    print()