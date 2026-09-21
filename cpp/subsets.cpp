// ======================================
// LeetCode Problem: subsets
// Language: cpp
// Link: https://leetcode.com/problems/subsets/
// Synced by: LinkCode
// Date: 9/21/2026, 7:30:21 PM
// ======================================


#include <set>
#include <cmath>

/*
TOO MUCH MEMORY
vector<vector<int>> subsets(vector<int>& nums) {
        std::set<int> empty{};
        std::vector<int> sub;
        std::set<std::set<int>> subset{empty};
        std::vector<std::vector<int>> tmp {};
        std::vector<std::vector<int>> tmp1;
        tmp.assign({std::vector<int>(nums.begin(), nums.end())});

        while (subset.size() != std::pow(2,nums.size()))
        {
            int j = 0;
            for (int i = 0; i<tmp.size(); i++)
            {
                for (auto inner = tmp.begin(); inner!=tmp.end(); inner++ )
                {
                    sub.insert(sub.begin(), inner->begin(), inner->end());
                    if (inner++ == tmp.end())
                    {
                            sub.push_back(nums[j]);
                    }
                }
                subset.insert(std::set<int>(sub.begin(), sub.end()));
                tmp1.push_back(sub);
                sub.erase(sub.begin(), sub.end());
            }
            tmp = tmp1;
            j++;
        }
        tmp.erase(tmp.begin(), tmp.end());
        for (const auto& s : subset) {
            tmp.insert(tmp.begin(), std::vector<int>(s.begin(), s.end()));
}
        return tmp;
    }*/
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> tmp;
        tmp.reserve(1<<nums.size());
        for (const auto & i: nums)
            tmp.insert(tmp.end(),vector<int>({i}));
        vector<int> tmp_val;
        vector<vector<int>> tmp1;
        set<set<int>> subset;
        for (const auto &i: nums)
            subset.insert(set<int>({i}));
        subset.insert(set<int>{});
    
       while (subset.size() < 1<<nums.size())
       {
            for (int i{0}; i<nums.size(); i++)
            { 
                for (auto itr = tmp.begin(); itr !=tmp.end(); itr++)
                {
                    tmp_val.push_back(nums[i]);
                    for (auto inner = itr->begin(); inner !=itr->end(); inner++)
                    {
                        tmp_val.push_back(*inner);
                        tmp1.push_back(tmp_val);
                        subset.insert(set<int>(tmp_val.begin(),tmp_val.end()));
                    }
                    
                    tmp_val.erase(tmp_val.begin(), tmp_val.end());
                }
                tmp.insert(tmp.end(),tmp1.begin(), tmp1.end()); /*Just this line made me think for hours. used tmp = tmp1 instead*/
                tmp1.erase(tmp1.begin(), tmp1.end());
            }
       }
        tmp.erase(tmp.begin(), tmp.end());
        for (const auto & s: subset)
            tmp.insert(tmp.end(), vector<int>(s.begin(), s.end()));
        return tmp;
    }     
};