n = int(input())
count=0
binary = str(bin(n).replace("0b", ""))
list1 = list()
for char in range(len(binary)):
    if binary[char]=="1":
        count+=1
        list1.append(char+1)
print(binary)
list1.insert(0,count)
#print(count)
print(list1)