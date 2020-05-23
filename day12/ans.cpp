/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 1;
        
        diameterRec(root, diameter);
        
        return diameter - 1;
    }
    
    int diameterRec(TreeNode* root, int& diameter) {
        if(root == nullptr) {
            return 0;
        }
        
        int left = diameterRec(root->left, diameter);
        int right = diameterRec(root->right, diameter);
        
        diameter = max(diameter, left+right+1);
        return max(left, right) + 1;
        
    }
};
