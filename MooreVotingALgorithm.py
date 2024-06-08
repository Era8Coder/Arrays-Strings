n = int(input())            # Size of Array
nums = []
for i in range(n):
    x = int(input())
    nums.append(x)

def check(candidate, nums):
    freq = 0
    n = len(nums)
    for i in range(n):
        if candidate == nums[i]:
            freq = freq + 1
    
    if freq > n/2:
        return True
    else:
        return False

def solve(nums):
    n = len(nums)
    
    if n == 1:
        return nums[0]                       # {Since freq. = 1 > 0}
    
    count = 1               # Initialize Count with 1 since We have potential "Candidate" in start
    candidate = nums[0]
    
    for i in range(1,n):
        if nums[i] == candidate:
            count = count + 1
        elif nums[i] != candidate:
            count = count - 1
            if count == 0:
                candidate = nums[i]
                count = count + 1
    
    if count > 0:
        if check(candidate, nums):
            return candidate
        else:
            return -1
    else:
        return -1

def majority_element(nums):
    return solve(nums)

print(majority_element(nums))