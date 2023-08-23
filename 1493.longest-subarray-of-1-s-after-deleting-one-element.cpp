/*
 * @lc app=leetcode id=1493 lang=cpp
 *
 * [1493] Longest Subarray of 1's After Deleting One Element
 */

// @lc code=start
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int leftPtr = 0, rightPtr = 0, zeroCnt = 0, maxCnt = 0;
        while(rightPtr < nums.size()){
            if(nums[rightPtr] == 0){
                zeroCnt++;
            }
            if(zeroCnt > 1){
                if(nums[leftPtr] == 0){
                    zeroCnt--;
                }
                leftPtr++;
            }
            rightPtr++;
        }
        maxCnt = max(maxCnt, rightPtr-leftPtr-1);
        return maxCnt;
    }
};
// @lc code=end

