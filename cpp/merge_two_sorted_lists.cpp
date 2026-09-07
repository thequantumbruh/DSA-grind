// ======================================
// LeetCode Problem: merge two sorted lists
// Language: cpp
// Link: https://leetcode.com/problems/merge-two-sorted-lists/
// Synced by: LinkCode
// Date: 9/7/2026, 1:50:10 PM
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
    
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        //Remember to always initialize your Null pointers bro.
        ListNode *head = NULL;
        ListNode *other = NULL;
        ListNode *rest = NULL;
        ListNode *tmp = NULL;
        ListNode *last = NULL;
        if (list1 == NULL){return list2;}
        if (list2 == NULL){return list1;}
       
        if (list1->val>= list2->val)
        {
            head = list2;
            other = list1;
        }
        else
        {
            head = list1;
            other = list2;
        }

        for (tmp = head; tmp->next != NULL; )
        {
            if (tmp != NULL && tmp->next->val >= other->val)
            {
                rest = tmp->next;
                tmp->next = other;
                last = other;
                other = rest;
                tmp = tmp->next;
            }
            else 
            {
                tmp = tmp->next;
            }
        }
        if( tmp != NULL && tmp->next == NULL && other == NULL)
        {
            tmp->next = rest;
        }
        else if( tmp != NULL && tmp->next == NULL && other != NULL)
        {
            tmp->next = other;
        }
       return head;
    }
};