// ======================================
// LeetCode Problem: remove duplicates from sorted list
// Language: cpp
// Link: https://leetcode.com/problems/remove-duplicates-from-sorted-list/
// Synced by: LinkCode
// Date: 9/6/2026, 8:45:57 PM
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
    ListNode* deleteDuplicates(ListNode* head) 
    {
        int i =0;
        ListNode *tmp;
        ListNode *dup;
        int last;   
        if (head == NULL)
            return NULL;
            for (tmp = head; tmp !=nullptr && tmp->next != nullptr; )
                {
                    if (tmp->val == tmp->next->val)
                    {
                        dup = tmp->next;
                        tmp->next = tmp->next->next;
                        delete dup;
                    }
                    else
                    {
                        tmp = tmp->next;
                    }
                }
        return head;
    }
};