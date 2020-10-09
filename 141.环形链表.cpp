/*
 * @lc app=leetcode.cn id=141 lang=cpp
 *
 * [141] 环形链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool hasCycle(ListNode *head) {
        while (head!=nullptr)
        {
            /* code */
            if(head->val==INT_MIN) return true;
            head->val=INT_MIN;
            head=head->next;
        }

        return false;
        
    }
};
// @lc code=end

