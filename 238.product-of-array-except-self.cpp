/*
 * @lc app=leetcode id=238 lang=cpp
 *
 * [238] Product of Array Except Self
 */

// @lc code=start
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> leftStore(nums.size(), 1);
        leftStore[0] = 1;
        for(int i = 1; i < nums.size(); i++){
            leftStore[i] = leftStore[i-1] * nums[i-1];
        }
        for(int i = nums.size()-1, right = 1; i >= 0; i--){
            leftStore[i] = leftStore[i] * right;
            right *= nums[i];
        }
        return leftStore;
    }
};
// @lc code=end

