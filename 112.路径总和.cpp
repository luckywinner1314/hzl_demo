/*
 * @lc app=leetcode.cn id=112 lang=cpp
 *
 * [112] 路径总和
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if(root==nullptr) return false;
        if(sum==root->val&&root->left==nullptr&&root->right==nullptr) return true;
        
        if(hasPathSum(root->left,sum-root->val))
            return true;
        if(hasPathSum(root->right,sum-root->val))
            return true;
        return false;

        
    }
};
// @lc code=end

