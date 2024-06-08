"""
You are given an integer array prices where prices[i] is the price of a given stock on the ith day.
On each day, you may decide to buy and/or sell the stock. You can only hold at most one share of 
the stock at any time. However, you can buy it then immediately sell it on the same day.
Find and return the maximum profit you can achieve.
"""
# Greedy Approach To Solve A Problem :)
n = int(input())
prices = []

for i in range(n):
    x = int(input())
    prices.append(x)

def max_profit(prices):
    profit = 0
    for i in range(1,n):
        if prices[i] - prices[i-1] > 0:
            profit = profit + prices[i] - prices[i-1]
        
    return profit

print(max_profit(prices))

# Very Interesting logic which I found which uses Proof By Contradiction :) -> 
"""
The first question after seeing the solution that comes to mind is why is it optimal. Why selecting the immediate peak is the optimal choice. Here is a mathematical understanding for that.

Consider this input : [a, ......, b, ......., c....., d]. Where ... refers to some input in between. a&c are valleys and b&d are peaks.

Points to understand.

If b&d both are peaks then there has to be some value in between them which is less than b. If not b could not have been a peak because the direct next peak immediate to a will be d.
If a&c are valleys then there has to be some value in between them which is greater than a. If not a could not have been a valley because the first valley will itself will be c.
Considering the first two points and assuming that not picking immediate next peak will lead to a better answer. Lets try to prove if we can do that.
If point 3 is true then we can say that
d-a > (b-a) + (d-c)
i.e d > b+d-c but as b-c > 0
i.e d > +ve + d

which is a false. So we can always say that picking up immediate next peak will always yeild a better result.
"""
