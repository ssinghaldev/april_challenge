class Solution:
    def findMaxLength(self, nums: List[int]) -> int:
        count_idx = {0 : -1}
        
        count = 0
        max_len = 0
        for idx, num in  enumerate(nums):
            if num == 0:
                count -= 1
            else:
                count += 1
            
            if count not in count_idx:
                count_idx[count] = idx
            else:
                max_len = max(max_len, idx - count_idx[count])
        
        return max_len
