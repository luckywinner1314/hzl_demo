/*
 * @lc app=leetcode.cn id=143 lang=cpp
 *
 * [143] 重排链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void reorderList(ListNode* head) {
        if(head==nullptr||head->next==nullptr) return; 
        vector<ListNode*> array;
        ListNode* temp=head;
        while(temp){
            array.emplace_back(temp);
            temp=temp->next;
        }
        temp=head;
        for(int i=array.size()-1;i>(array.size()+1)/2-1;i--){
            array[i]->next=temp->next;
            temp->next=array[i];
            temp=temp->next->next;
        }
        array[array.size()/2]->next=nullptr;
        return;
    }
};
// @lc code=end

