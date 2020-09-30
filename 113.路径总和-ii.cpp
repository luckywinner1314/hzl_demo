/*
 * @lc app=leetcode.cn id=113 lang=cpp
 *
 * [113] 路径总和 II
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
    vector<vector<int>> ans;
    vector<int> path;

    void DFS(TreeNode* root,int sum)
    {
        if(root==nullptr) return;
        path.emplace_back(root->val);
        if(sum==root->val&&root->left==nullptr&&root->right==nullptr)
        {
            ans.emplace_back(path);
            path.pop_back();
            return;
        }
        
        DFS(root->left,sum-root->val);
        DFS(root->right,sum-root->val);
        path.pop_back();
        return;
    }
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        DFS(root,sum);
        return ans;
        
    }
};
// @lc code=end

