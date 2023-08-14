/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) { return false;}
        long long reversed = 0;
        long long non_reversed = x;
        while (non_reversed != 0) {
            int digit = non_reversed % 10;
            reversed = reversed * 10 + digit;
            non_reversed /= 10;
        }
        return (reversed == x);
    }
};
// @lc code=end

