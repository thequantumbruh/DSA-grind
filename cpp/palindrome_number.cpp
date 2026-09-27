// ======================================
// LeetCode Problem: palindrome number
// Language: cpp
// Link: https://leetcode.com/problems/palindrome-number/
// Synced by: LinkCode
// Date: 9/27/2026, 6:45:26 PM
// ======================================


#include <string>
class Solution
{
public:
    bool isPalindrome(int x)
    {
        std::string a{std::to_string(x)};
        /*initially used static cast; static cast cant be used for int to string
        conversion remember that they are completely different tyoes in memory

        use to_string instead*/
        std::string b;
        int size{static_cast<char>(a.size()) - 1};
        int d{size};
        for (int i{0}; i <= size; i++)
        {
            b.push_back(a[d]);
            d--;
        }
        if (b == a)
        {
            return true;
        }
        else
        {
           return false;
        }
    }
};