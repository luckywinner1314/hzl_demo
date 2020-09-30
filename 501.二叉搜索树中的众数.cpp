/*
 * @lc app=leetcode.cn id=501 lang=cpp
 *
 * [501] 二叉搜索树中的众数
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
    map<int,int> mp;
    void inorder(TreeNode* root)
    {
        if(root==nullptr) return;
        if(mp.find(root->val)==mp.end())
        {
            mp[root->val]=1;
        }
        else
        {
            /* code */
            int temp=mp[root->val]+1;
            mp[root->val]=temp;
        }
        
        inorder(root->left);
        inorder(root->right);

    }
    vector<int> findMode(TreeNode* root) {
        vector<int> ans;
        inorder(root);
        int max=0;
        for(map<int,int>::iterator it=mp.begin();it!=mp.end();it++)
        {
            if(it->second>max) max=it->second;
        }
        for(map<int,int>::iterator it=mp.begin();it!=mp.end();it++)
        {
            if(it->second==max) ans.push_back(it->first);
        }
        return ans;


        
    }
};
// @lc code=end

