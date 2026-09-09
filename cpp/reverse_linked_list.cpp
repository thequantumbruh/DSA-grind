// ======================================
// LeetCode Problem: reverse linked list
// Language: cpp
// Link: https://leetcode.com/problems/reverse-linked-list/
// Synced by: LinkCode
// Date: 9/9/2026, 3:13:57 PM
// ======================================


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
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *tmp = nullptr;
        ListNode *itr = head;
        
        if (head != NULL && head->next == NULL){return head;}
        if (head == NULL){return NULL;}
        ListNode *rest = head->next;
        for(itr; itr != nullptr&&rest!=nullptr;)
        {
            if (itr == head)
            {
                head->next = nullptr;
            }
            tmp = rest->next;
            rest->next = itr;
            itr = rest;
            rest = tmp;
        }
        return itr;   
    }
};