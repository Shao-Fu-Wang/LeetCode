/*
 * @lc app=leetcode id=383 lang=cpp
 *
 * [383] Ransom Note
 */

// @lc code=start
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int> letters;
        for(char c : magazine){
            letters[c]++;
        }
        for(char c : ransomNote){
            if(letters[c])
                letters[c]--;
            else
                return false;
        }
        return true;
    }
};
// @lc code=end

