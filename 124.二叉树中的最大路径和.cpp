/*
 * @lc app=leetcode.cn id=124 lang=cpp
 *
 * [124] 二叉树中的最大路径和
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

#include<algorithm>
using namespace std;
class Solution {
public:
    int _max=INT_MIN;

    int preorder(TreeNode* root){
        if(root==nullptr) return 0;
        int sum=root->val;
        // 跑左边；
        int left=max(0,preorder(root->left));
        //跑右边；
        int right=max(0,preorder(root->right));

        // 左，右，或者左右都跑的最大值；
        _max=_max>sum+left+right?_max:sum+left+right;
        return sum+max(left,right);
    }

    int maxPathSum(TreeNode* root) {
       preorder(root);
        return _max;

    }
};

// class Solution {
// private:
//     int maxSum = INT_MIN;

// public:
//     int maxGain(TreeNode* node) {
//         if (node == nullptr) {
//             return 0;
//         }
        
//         // 递归计算左右子节点的最大贡献值
//         // 只有在最大贡献值大于 0 时，才会选取对应子节点
//         int leftGain = max(maxGain(node->left), 0);
//         int rightGain = max(maxGain(node->right), 0);

//         // 节点的最大路径和取决于该节点的值与该节点的左右子节点的最大贡献值
//         int priceNewpath = node->val + leftGain + rightGain;

//         // 更新答案
//         maxSum = max(maxSum, priceNewpath);

//         // 返回节点的最大贡献值
//         return node->val + max(leftGain, rightGain);
//     }

//     int maxPathSum(TreeNode* root) {
//         maxGain(root);
//         return maxSum;
//     }
// };

// @lc code=end

