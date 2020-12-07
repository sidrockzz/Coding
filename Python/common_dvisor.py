def cf(num1,num2):
    n=[]
    for i in range(1, min(num1,num2)+1): 
        if num1%i==num2%i==0: 
            n.append(i)
    return n

print(sorted(cf(int(input("a:")),int(input("b:")))))