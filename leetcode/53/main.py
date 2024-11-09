class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        result = nums[0] 
        current_sum = 0  

        for i, n in enumerate(nums):
            current_sum = max(current_sum, 0) 
            current_sum += n  
            result = max(result, current_sum)

            # print(f"Iteration {i}: n = {n}, current_sum = {current_sum}, result = {result}")

        return result 
