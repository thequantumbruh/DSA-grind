// ======================================
// LeetCode Problem: delete node in a linked list
// Language: cpp
// Link: https://leetcode.com/problems/delete-node-in-a-linked-list/
// Synced by: LinkCode
// Date: 9/27/2026, 3:56:24 PM
// ======================================


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
    void deleteNode(ListNode* node) 
    {
        node->val = node->next->val;
        node->next = node->next->next; 
    }
};