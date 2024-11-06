class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashset = {}
        for i in range(len(nums)):
            hashset[nums[i]]= i 
        
        for j in range(len(nums)):
            y = target - nums[j]
            if y in hashset and hashset[y]!=j:
                return [j, hashset[y]]

