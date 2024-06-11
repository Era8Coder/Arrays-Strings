def min_candies(arr):
    n = len(arr)
    dp = [1] * n

    # Traverse from left to right
    for i in range(1, n):
        if arr[i] > arr[i-1]:
            dp[i] = dp[i-1] + 1

    # Traverse from right to left
    for i in range(n-2, -1, -1):
        if arr[i] > arr[i+1]:
            dp[i] = max(dp[i], dp[i+1] + 1)

    # Compute the total number of candies
    total_candies = sum(dp)

    # Return the total number of candies
    return total_candies

# Example input
arr = [1,3,2,2,1]

# Call the function
result = min_candies(arr)

# Print the result
print(result)
