class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        insert_idx = 0
        for idx, num in enumerate(nums):
            if num != 0:
                if idx > insert_idx:
                    nums[insert_idx], nums[idx] = nums[idx], nums[insert_idx]
                
                insert_idx += 1
