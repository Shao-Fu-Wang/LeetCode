/*
 * @lc app=leetcode id=443 lang=cpp
 *
 * [443] String Compression
 */

// @lc code=start
class Solution {
public:
    int compress(vector<char>& chars) {
        int slowPtr = 0, fastPtr = 0, cnt = 0;
        while(fastPtr < chars.size()){
            chars[slowPtr] = chars[fastPtr];
            while(fastPtr < chars.size() && chars[slowPtr] == chars[fastPtr]){
                fastPtr++;
                cnt++;
            }
            slowPtr++;
            if (cnt > 1) {
                string str = to_string(cnt);
                for (auto digit : str) {
                    chars[slowPtr++] = digit;
                }
            }
            cnt = 0;
        }
        return slowPtr;
    }
};
// @lc code=end

