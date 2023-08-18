/*
 * @lc app=leetcode id=1768 lang=cpp
 *
 * [1768] Merge Strings Alternately
 */

// @lc code=start
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        for(int i = 0, j = 0; i < word1.length() || j < word2.length();){
            if(i < word1.length()){
                ans += word1[i];
                i++;
            }
            if(j < word2.length()){
                ans += word2[j];
                j++;
            }
        }
        return ans;
    }
};
// @lc code=end

