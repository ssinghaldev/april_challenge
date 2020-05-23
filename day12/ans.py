# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def diameterOfBinaryTree(self, root: TreeNode) -> int:
        diameter = [0]
        self.findDiameterRec(root, diameter)
        
        return diameter[0] - 1 if diameter[0] > 0 else 0
        
    def findDiameterRec(self, root, diameter):
        if not root:
            return 0
        
        left_len = 0
        right_len = 0

        left_len = self.findDiameterRec(root.left, diameter)
        right_len = self.findDiameterRec(root.right, diameter)
        
        if left_len + right_len + 1 > diameter[0]:
            diameter[0] = left_len + right_len + 1
        
        return left_len + 1 if left_len > right_len else right_len + 1 
