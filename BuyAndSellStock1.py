n = int(input())
prices = []

for i in range(n):
    x = int(input())
    prices.append(x)

def max_profit(prices):
    buy = prices[0]                     # This problem is basically based on the approach of Storing A value nad then later using it and updating to calculate the Maximum Profit
    profit = 0
    for i in range(1,n):
        if prices[i] < buy:         # I CAN'T SELL ON THIS PARTICULAR DAY :( -> Since It will give me loss
            buy = prices[i]         # I will rather prefer to purchase :-)
        else:
            profit = max(profit,prices[i] - buy)

    if profit > 0:
        return profit
    else:
        return 0
    
print(max_profit(prices))