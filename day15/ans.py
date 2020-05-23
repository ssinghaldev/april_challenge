class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        ans = [1]
        
        for i in range(len(nums) - 1):
            ans.append(nums[i] * ans[-1])
        
        idx = len(ans) - 1
        r = 1
        for i, j, k in zip(reversed(ans), reversed(nums), range(idx, -1, -1)):
            ans[k] = i*r
            r *= j
            
        return ans
