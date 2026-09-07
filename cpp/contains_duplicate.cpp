// ======================================
// LeetCode Problem: contains duplicate
// Language: cpp
// Link: https://leetcode.com/problems/contains-duplicate/
// Synced by: LinkCode
// Date: 9/8/2026, 12:14:00 AM
// ======================================


class Solution {
public:
    bool containsDuplicate(vector<int>& nums)
     {
       std::set<int> num (nums.begin(), nums.end());
       if (num.size() == nums.size())
       {
        return false;
       }
       return true;
     }
};