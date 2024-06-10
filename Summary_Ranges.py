n = int(input())
nums = []

for i in range(n):
    x = int(input())
    nums.append(x)

def summary_ranges(nums):
    i = 0
    s = []

    n = len(nums)
    print(n)
    while i < n:
        j = i
        while (i + 1 < n and nums[i+1] == nums[i] + 1):
            i = i + 1

        if i == j:
            s.append(str(nums[i]))

        else:
            s.append(str(nums[j]) + "->" + str(nums[i]))

        i = i + 1

    return s        

vector = summary_ranges(nums)

for i in range(len(vector)):
    print(vector[i], end = " ")