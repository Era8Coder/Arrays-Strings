from typing import List

class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        n = len(nums)
        lst = [0] * n
        k = k % n
        for i in range(n):
            lst[(i + k) % n] = nums[i]
        
        for i in range(n):
            nums[i] = lst[i]

# Example usage:
sol = Solution()
arr = [1, 2, 3, 4, 5, 6, 7]
sol.rotate(arr, 3)
print(arr)  # Output: [5, 6, 7, 1, 2, 3, 4]
