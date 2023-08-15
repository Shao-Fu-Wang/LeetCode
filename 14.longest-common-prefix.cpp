/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string firstStr = strs[0];
        string lastStr = strs[strs.size()-1];
        string ansStr = "";
        for(int i = 0; i < firstStr.length() ; i++){
            if(firstStr[i] == lastStr[i])
                ansStr += firstStr[i];
            else
                break;
        }
        return ansStr;
    }
};
// @lc code=end

