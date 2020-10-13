/*
 * @lc app=leetcode.cn id=530 lang=cpp
 *
 * [530] 二叉搜索树的最小绝对差
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
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> path;
    void inorder(TreeNode* root)
    {
        if(root==nullptr) return;
        inorder(root->left);
        path.emplace_back(root->val);
        inorder(root->right);

        return;
    }
    int getMinimumDifference(TreeNode* root) {
        inorder(root);
        int ans=INT_MAX;
        for(int i=0;i<path.size()-1;i++)
        {
            ans=ans<path[i+1]-path[i]?ans:path[i+1]-path[i];
        }
        return ans;

    }
};
// @lc code=end

