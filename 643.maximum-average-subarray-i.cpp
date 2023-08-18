/*
 * @lc app=leetcode id=643 lang=cpp
 *
 * [643] Maximum Average Subarray I
 */

// @lc code=start
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int ptr = 0;
        int sum = 0;
        int maxSum = 0;
        for(int i = 0; i < k; i++){
            sum += nums[i];
        }
        maxSum = sum;
        ptr++;
        while(ptr + k <= nums.size()){
            maxSum = max(maxSum, sum-nums[ptr-1]+nums[ptr-1+k]);
            sum = sum-nums[ptr-1]+nums[ptr-1+k];
            ptr++;
        }
        return double(maxSum)/k;
    }
};
// @lc code=end
//[0,4,0,3,2]\n1
