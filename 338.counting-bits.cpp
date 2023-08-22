/*
 * @lc app=leetcode id=338 lang=cpp
 *
 * [338] Counting Bits
 */

// @lc code=start
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> b(n+1, 0);
        b[0] = 0;
        for(int i = 1; i <= n; i++){
            b[i] = b[i/2] + i%2;
        }
        return b;
    }
};
// @lc code=end

