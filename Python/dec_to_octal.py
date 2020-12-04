deci = int(input('Enter a decimal value ->'))
octal= 0
ctr =0
temp = deci
while temp:
    octal+= ((temp%8) * (10 **ctr))
    temp //=8
    ctr +=1

print('octal of decimal',deci,'is',octal)

octal = int(input('Enter Octal value ->'))
temp = octal
deci =0
base =1

while temp:
    last_digit = temp%10
    temp //=10
    deci += last_digit * base
    base = base *8

print('Octal of ',octal, 'decimal is',deci)