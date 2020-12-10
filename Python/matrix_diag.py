#!/usr/bin/python3
mat = [[11, 2, 4], 
        [4, 5, 6], 
        [10, 8, -12]]
d1 = 0
d2 = 0
n = len(mat)
print(n)
for i in range(n): 
    d1 += mat[i][i] 
    d2 += mat[i][n - i - 1] 

print(str(abs(d2-d1)))