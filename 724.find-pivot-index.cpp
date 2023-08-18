/*
 * @lc app=leetcode id=724 lang=cpp
 *
 * [724] Find Pivot Index
 */

// @lc code=start
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int rsum = accumulate(nums.begin(), nums.end(), 0);
        int lsum = 0;
        for(int i = 0; i < nums.size(); i++){
            rsum -= nums[i];
            if(lsum == rsum){
                return i;
            }
            lsum += nums[i];
        }
        return -1;
    }
};
// @lc code=end

