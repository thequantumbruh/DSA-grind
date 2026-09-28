// ======================================
// LeetCode Problem: rotate list
// Language: cpp
// Link: https://leetcode.com/problems/rotate-list/
// Synced by: LinkCode
// Date: 9/28/2026, 1:37:31 AM
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
int i{0};
ListNode* helper (ListNode *head)
{
    for (auto itr = head; itr != nullptr; itr = itr->next)
        {
            if (itr->next != nullptr && itr->next->next == nullptr)
            {
                head = new ListNode(itr->next->val, head);
                itr->next->next = head;
                itr->next = nullptr;
            }
        }
        
        return head;
}

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) 
    {
        if(head == nullptr)
            return head;
        for (auto itr = head; itr != nullptr; itr = itr->next)
        {
            i++;
        }
        i = k%i;

        while (i!= 0)
        {
            head = helper(head);
            i--;
        }
        
        return head;
    }
};