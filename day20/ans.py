# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def bstFromPreorder(self, preorder: List[int]) -> TreeNode:
        return self.rootBst(preorder, 0, len(preorder) - 1)
    
    def rootBst(self, arr, low, high):
        if low > high:
            return None
        
        if low == high:
            return TreeNode(arr[low])
        
        root = TreeNode(arr[low])
        
        right_low = None 
        for i in range(low + 1, high + 1):
            if arr[i] > arr[low]:
                right_low = i
                break
        
        if not right_low:
            root.left = self.rootBst(arr, low + 1, high)
            root.right = None
        else:
            root.left = self.rootBst(arr, low + 1, right_low - 1)
            root.right = self.rootBst(arr, right_low, high)
            
        return root
        
        
