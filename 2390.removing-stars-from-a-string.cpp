/*
 * @lc app=leetcode id=2390 lang=cpp
 *
 * [2390] Removing Stars From a String
 */

// @lc code=start
class Solution {
public:
    string removeStars(string s) {
        int slowPtr = 0, fastPtr = 0;
        while(fastPtr < s.length()){
            if(s[fastPtr]=='*'){
                slowPtr--;
            }
            else{
                s[slowPtr++] = s[fastPtr];
            }
            fastPtr++;
        }
        return s.substr(0, slowPtr);
    }
};
// @lc code=end

