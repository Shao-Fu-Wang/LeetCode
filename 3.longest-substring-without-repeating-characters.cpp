/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.length() == 0) {
            return 0;
        }
        
        unordered_map<char, int> cnt;
        int leftPtr = 0, rightPtr = 0, maxCnt = 0;
        
        while (rightPtr < s.length()) {
            if (cnt.count(s[rightPtr]) > 0) {
                leftPtr = max(leftPtr, cnt[s[rightPtr]] + 1);
            }
            
            cnt[s[rightPtr]] = rightPtr;
            maxCnt = max(maxCnt, rightPtr - leftPtr + 1);
            rightPtr++;
        }
        
        return maxCnt;
    }
};
// @lc code=end


