/*
 * @lc app=leetcode.cn id=117 lang=cpp
 *
 * [117] 填充每个节点的下一个右侧节点指针 II
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    vector<Node*> ans;
    void full_next(vector<Node*>& ans)
    {
        if(ans.size()==0) return;
        vector<Node*> temp(ans);
        ans.clear();
        for(int i=0;i<temp.size();i++)
        {
            if(i<temp.size()-1) temp[i]->next=temp[i+1];
            else temp[i]->next=NULL;
            if(temp[i]->left!=NULL) ans.emplace_back(temp[i]->left);
            if(temp[i]->right!=NULL) ans.emplace_back(temp[i]->right);
        }
        full_next(ans);
    }

    Node* connect(Node* root) {
        if(root==NULL) return root;
        ans.emplace_back(root);
        full_next(ans);
        return root;
    }
};
// @lc code=end

