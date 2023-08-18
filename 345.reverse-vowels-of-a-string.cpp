/*
 * @lc app=leetcode id=345 lang=cpp
 *
 * [345] Reverse Vowels of a String
 */

// @lc code=start
class Solution {
public:
    bool isVowel(char c){
        c = tolower(c);
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }
    string reverseVowels(string s) {
        int leftPtr = 0, rightPtr = s.length()-1;
        while(leftPtr < rightPtr){
            if(isVowel(s[rightPtr]) && isVowel(s[leftPtr])){
                swap(s[rightPtr], s[leftPtr]);
                rightPtr--, leftPtr++;
            }
            !isVowel(s[rightPtr]) ? rightPtr-- : NULL;
            !isVowel(s[leftPtr]) ? leftPtr++: NULL;
        }
        return s;
    }
};
// @lc code=end

