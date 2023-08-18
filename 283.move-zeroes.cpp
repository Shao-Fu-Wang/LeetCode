/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int slowPtr = 0, fastPtr=0;
        while(fastPtr < nums.size()){
            if(nums[fastPtr]!=0){
                swap(nums[slowPtr++],nums[fastPtr++]);
            }
            else{
                fastPtr++;
            }
        }
    }
};
// @lc code=end

