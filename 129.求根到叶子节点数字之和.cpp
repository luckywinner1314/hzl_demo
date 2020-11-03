/*
 * @lc app=leetcode.cn id=129 lang=cpp
 *
 * [129] 求根到叶子节点数字之和
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
    int ans;
    void DFS(TreeNode* root,int sum_path){
        if(root->left==nullptr&&root->right==nullptr){
            ans+=sum_path*10+root->val;
            return;
        } 
        if(root->left!=nullptr)
        DFS(root->left,sum_path*10+root->val);

        if(root->right!=nullptr)
        DFS(root->right,sum_path*10+root->val);
        return;

    }

    int sumNumbers(TreeNode* root) {
        if(root==nullptr) return 0;
        DFS(root,0);
        return ans;
    }
};
// @lc code=end

