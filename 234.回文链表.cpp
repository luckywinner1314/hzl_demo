/*
 * @lc app=leetcode.cn id=234 lang=cpp
 *
 * [234] 回文链表
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

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head==nullptr) return true;
        if(head->next==nullptr) return true;
        ListNode* first=head;
        ListNode* second=head;
        ListNode* temp;

        while((first->next!=nullptr)&&(second->next!=nullptr))
        {
            if(second->next->next==nullptr) break;
            second=second->next->next;
            temp=first->next;
            first->next=first->next->next;
            temp->next=head;
            head=temp;
           
            /* code */
        }
        if(second->next==nullptr){
            while(first->next!=nullptr){
                if(head->next->val!=first->next->val) return false;
                first=first->next;
                head=head->next;
            }
        }
        if(second->next!=nullptr){
            while (first->next!=nullptr){
                if(head->val!=first->next->val) return false;
                first=first->next;
                head=head->next;
            }
            
        }
        return true;
    }
};
// @lc code=end

