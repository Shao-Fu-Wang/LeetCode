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
        vector<int> costSum(n, 0);
        costSum[0] = cost[0];
        costSum[1] = cost[1];
        for (int i = 2; i < n; i++) {
            costSum[i] = cost[i] + min(costSum[i-1], costSum[i-2]);
        }
        return min(costSum[n-1], costSum[n-2]);
    }
};
// @lc code=end

// walk: costSum + cost[i];
// not walk: costSum[i-1];
// mincost of lv i = cost[i] + min(costSum[i-1],costSum[i-2]);