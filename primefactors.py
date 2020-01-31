# cook your dish here
import math 
  
# Function to calculate all the prime  
# factors and count of every prime factor 
def factorize(n): 
    count = 0; 
  
    # count the number of  
    # times 2 divides  
    while ((n % 2 > 0) == False):  
          
        # equivalent to n = n / 2; 
        n >>= 1;  
        count += 1; 
  
    # if 2 divides it 
    if (count > 0): 
        print(2, count); 
  
    # check for all the possible 
    # numbers that can divide it 
    for i in range(3, int(math.sqrt(n)) + 1): 
        count = 0; 
        while (n % i == 0):  
            count += 1; 
            n = int(n / i); 
        if (count > 0): 
            print(i, count); 
        i += 2; 
  
    # if n at the end is a prime number. 
    if (n > 2): 
        print(n, 1); 
  
# Driver Code 
n = 600851475143; 
factorize(n); 