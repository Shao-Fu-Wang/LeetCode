/*
 * @lc app=leetcode id=151 lang=cpp
 *
 * [151] Reverse Words in a String
 */

// @lc code=start
class Solution {
public:
    string reverseWords(string s) {
        string temp = "";
        string ans = "";
        int left = 0;
        while (s[left] == ' ') {
            left++;
        }
        int right = s.length() - 1;
        while (s[right] == ' ') {
            right--;
        }
        while (left <= right) {
            if (s[left] != ' ') {
                temp += s[left];
            }
            else {
                if (s[left - 1] == ' ') {
                    left++;
                    continue;
                }
                else {
                    ans = temp + " " + ans;
                    temp = "";
                }
            }
            left++;
        }
        ans = temp + " " + ans;
        ans.erase(ans.begin() + ans.length() - 1); // to erase extra space at the end
        return ans;
    }
};
// @lc code=end

