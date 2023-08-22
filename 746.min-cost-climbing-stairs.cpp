/*
 * @lc app=leetcode id=746 lang=cpp
 *
 * [746] Min Cost Climbing Stairs
 */

// @lc code=start
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        int lowerStair = cost[0];
        int upperStair = cost[1];
        int currentStair;
        for (int i = 2; i < n; i++) {
            currentStair = cost[i] + min(lowerStair, upperStair);
            lowerStair = upperStair;
            upperStair = currentStair;
        }
        return min(lowerStair, upperStair);
    }
};
// @lc code=end

// walk: costSum + cost[i];
// not walk: costSum[i-1];
// mincost of lv i = cost[i] + min(costSum[i-1],costSum[i-2]);