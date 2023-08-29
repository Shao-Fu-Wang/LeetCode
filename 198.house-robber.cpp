/*
 * @lc app=leetcode id=198 lang=cpp
 *
 * [198] Sum Game
 */

// @lc code=start
class Solution {
public:
    int rob(vector<int>& nums) {
        if(!nums.size()){
            return 0;
        }
        int memo1 = 0, memo2 = 0;
        for(auto num : nums){
            int temp = memo1;
            memo1 = max(memo2 + num, memo1); 
            memo2 = temp;
        }
        return memo1;
    }
};
