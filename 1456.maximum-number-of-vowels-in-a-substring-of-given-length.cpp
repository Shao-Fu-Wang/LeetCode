/*
 * @lc app=leetcode id=1456 lang=cpp
 *
 * [1456] Maximum Number of Vowels in a Substring of Given Length
 */

// @lc code=start
class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_set<char> vowel = {'a', 'e', 'i', 'o', 'u'}; 
        int cnt = 0;
        for(int i = 0; i < k; i++){
            if(vowel.count(s[i])){
                cnt++;
            }
        }
        int slowPtr = 0, fastPtr = k-1,  maxCnt = cnt;
        while(fastPtr < s.length()){
            fastPtr++;
            if(vowel.count(s[slowPtr])){
                cnt--;
            }
            if(vowel.count(s[fastPtr])){
                cnt++;
            }
            slowPtr++;
            maxCnt = cnt>maxCnt ? cnt : maxCnt;
        }
        return maxCnt;
    }
};
// @lc code=end

