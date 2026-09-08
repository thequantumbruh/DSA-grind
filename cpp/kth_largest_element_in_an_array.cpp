// ======================================
// LeetCode Problem: kth largest element in an array
// Language: cpp
// Link: https://leetcode.com/problems/kth-largest-element-in-an-array/
// Synced by: LinkCode
// Date: 9/8/2026, 4:23:14 AM
// ======================================


class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
       /*
            If i were to try without sorting but high time complexity 0log(nsqr);
        std::vector<int>vec;
        while (nums.size()!=0)
        {
            auto i = std::max_element(nums.begin(), nums.end());
            vec.push_back(*i);
            nums.erase(i);
        }
        return vec[k-1];
        */
        std::sort(nums.rbegin(), nums.rend());
        return nums[k-1];
    }
};