/*
 * @lc app=leetcode.cn id=142 lang=cpp
 *
 * [142] 环形链表 II
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
// #include<bits/stdc++.h>
// using namspace std;
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
       ListNode *ans=nullptr;
       while (head!=nullptr)
       {
           
           if(head->val==INT_MIN)
           {
               ans=head;
               break;
           }
           if(head->val!=INT_MIN) head->val=INT_MIN;
           head=head->next;
       }
       return ans;
        
    }
};
// @lc code=end

