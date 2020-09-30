/*
 * @lc app=leetcode.cn id=106 lang=cpp
 *
 * [106] 从中序与后序遍历序列构造二叉树
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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int size=inorder.size();
        if(size==0) return nullptr;
        auto root=new TreeNode(postorder[size-1]);
        vector<int> in_left,post_left,in_right,post_right;//左子树的中序和后序。。。。。
        int in_id=0;
        // 找出左子树的中序和后序
        for(int i=0;i<size;i++)
        {
           if(inorder[i]==postorder[size-1]) 
           {   in_id=i;
               break;}
           in_left.emplace_back(inorder[i]);
           post_left.emplace_back(postorder[i]);
        }
        // 找出右子树的中序和后序
        for(int i=in_id+1;i<size;i++)
        {
            in_right.emplace_back(inorder[i]);
            post_right.emplace_back(postorder[i-1]);
        }
        root->left=buildTree(in_left,post_left);
        root->right=buildTree(in_right,post_right);
        return root;
        

    }
};
// @lc code=end

