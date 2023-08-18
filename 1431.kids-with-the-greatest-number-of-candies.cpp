/*
 * @lc app=leetcode id=1431 lang=cpp
 *
 * [1431] Kids With the Greatest Number of Candies
 */

// @lc code=start
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxCandies = *max_element(candies.begin(), candies.end());
        vector<bool> ans;
        for(auto i : candies){
            i+extraCandies >= maxCandies? ans.push_back(1) : ans.push_back(0);
        }
        return ans;
    }
};
// @lc code=end

