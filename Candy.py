"""
    This Question Had Taught Me That Every Question Which Has A Tag of Hard On It Is Really Not That Much Hard :)
"""

n = int(input())
ratings = []
for i in range(n):
    x = int(input())
    ratings.append(x)

def candy(ratings):
    ans = [1]*n                 # Creating an array of size "n" which will get updated again and again :)
    for i in range(n-1):
        if ratings[i] < ratings[i+1]:
            ans[i+1] = ans[i] + 1               # Rating of neighbor must be more than "IT"
        
    for j in range(n-1,0,-1):
        if ratings[j] < ratings[j-1]:
            ans[j-1] = max(ans[j-1], ans[j] + 1)             # If rating of "j-1" > "j"; then do it

    total_candies = sum(ans)                # Inbuilt Function to Get the Sum of Elements of the Entire Array !!!
    return total_candies

print(candy(ratings))