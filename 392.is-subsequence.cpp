/*
 * @lc app=leetcode id=392 lang=cpp
 *
 * [392] Is Subsequence
 */

// @lc code=start
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sPtr = 0, tPtr = 0;
        while(tPtr < t.length()){
            if(s[sPtr] == t[tPtr]){
                sPtr++, tPtr++;
            }
            else{
                tPtr++;
            }
        }
        return sPtr == s.length();
    }
};
// @lc code=end

