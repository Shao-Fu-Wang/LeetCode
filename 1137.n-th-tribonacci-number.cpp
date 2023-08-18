/*
 * @lc app=leetcode id=1137 lang=cpp
 *
 * [1137] N-th Tribonacci Number
 */

// @lc code=start
class Solution {
public:
    int tribonacci(int n) {
        vector<int> vec = {0, 1, 1};
        for(int i = 3; i <= n; i++){
            vec[i%3] = (vec[0] + vec[1] + vec[2]);
        }
        return vec[n%3];
    }
};
// @lc code=end

