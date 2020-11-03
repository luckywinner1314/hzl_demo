/*
 * @lc app=leetcode.cn id=144 lang=cpp
 *
 * [144] 二叉树的前序遍历
 */

// @lc code=start
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
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> path;
        stack<TreeNode *> stk;

        while (root!=nullptr||!stk.empty()){
            while(root!=nullptr){
            /* code */
            stk.push(root);
            path.emplace_back(root->val);
            root=root->left;
            }
            root=stk.top();
            stk.pop();
            if(root->right!=nullptr){
                root=root->right;
            }
            else{
                root=nullptr;
            }
        }
        return path;
    }
};
// @lc code=end

