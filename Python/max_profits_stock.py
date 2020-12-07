def maxProfit(prices):  
    n = len(prices)
    cost = 0
    maxcost = 0
    if (n == 0):
        return 0
    min_price = prices[0]
 
    for i in range(n):
        min_price = min(min_price, prices[i])
        cost = prices[i] - min_price
        maxcost = max(maxcost, cost)
    return maxcost
prices = list(map(int,input().split()))

print(maxProfit(prices))