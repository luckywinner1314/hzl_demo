/*
 * @lc app=leetcode.cn id=701 lang=cpp
 *
 * [701] 二叉搜索树中的插入操作
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
// #include<bits/stdc++.h>
// using namespace std;
class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==nullptr)
        {
            return new TreeNode(val);
        }

        // 递归法
        // if(val>root->val) root->right=insertIntoBST(root->right,val);
        // if(val<root->val) root->left=insertIntoBST(root->left,val);
        // return root;

        TreeNode* pos=root;
        while (pos!=nullptr)
        {
            /* code */
            if(val<pos->val)
            {
                if(pos->left!=nullptr)
                {
                    pos=pos->left;
                    continue;
                }
                else
                {
                    pos->left=new TreeNode(val);
                    break;
                }
                
            }
            if(val>pos->val)
            {
                if(pos->right!=nullptr)
                {
                    pos=pos->right;
                    continue;
                }
                else
                {
                    pos->right=new TreeNode(val);
                    break;
                }
                
            }
        }
        return root;


        
    }
};
// @lc code=end

