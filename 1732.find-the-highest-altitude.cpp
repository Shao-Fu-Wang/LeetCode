/*
 * @lc app=leetcode id=1732 lang=cpp
 *
 * [1732] Find the Highest Altitude
 */

// @lc code=start
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int height = 0;
        int maxHeight = 0;
        for(auto i : gain){
            height += i;
            maxHeight = max(maxHeight, height);
        }
        return maxHeight;
    }
};
// @lc code=end

