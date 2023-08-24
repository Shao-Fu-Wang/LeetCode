/*
 * @lc app=leetcode id=2352 lang=cpp
 *
 * [2352] Equal Row and Column Pairs
 */

// @lc code=start
class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int counter = 0;
        map<vector<int>, int> cnt;
        vector<int> temp;
        for(auto it : grid){
            cnt[it]++;
        }
        for(int i = 0; i < grid.size(); i++){
            temp.clear();
            for(int j = 0; j < grid.size(); j++){
                temp.push_back(grid[j][i]);
            }
            counter += cnt[temp];
        }
        return counter;
    }
};
// @lc code=end

