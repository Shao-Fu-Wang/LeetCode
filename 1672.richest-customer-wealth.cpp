/*
 * @lc app=leetcode id=1672 lang=cpp
 *
 * [1672] Richest Customer Wealth
 */

// @lc code=start
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxima=0;
        for(auto i = accounts.begin(); i != accounts.end(); i++){
            maxima = max(maxima, reduce(i->begin(), i->end()));
        }
        return maxima;
    }
};
// @lc code=end

