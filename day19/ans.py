class Solution:
    def search(self, nums: List[int], target: int) -> int:
        low = 0
        high = len(nums) - 1
        
        while low <= high:
            middle = low + ((high - low) // 2)
            
            if nums[middle] == target:
                return middle
            
            if nums[low] <= nums[middle]:
                if target >= nums[low] and target < nums[middle]:
                    high = middle - 1
                else:
                    low = middle + 1
            else:
                if target >= nums[low] or target < nums[middle]:
                    high = middle - 1
                else:
                    low = middle + 1
                
        return -1
        
