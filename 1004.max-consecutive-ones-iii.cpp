/*
 * @lc app=leetcode id=1004 lang=cpp
 *
 * [1004] Max Consecutive Ones III
 */

// @lc code=start
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int leftPtr = 0, rightPtr = 0, maxCnt = 0, zeroCnt = 0;
        while(rightPtr < nums.size()){
            if(nums[rightPtr] == 0){
                zeroCnt++;
            }
            if(zeroCnt > k){
                if(nums[leftPtr] == 0){
                    zeroCnt--;
                }
                leftPtr++;
            }
            maxCnt = max(maxCnt, rightPtr-leftPtr+1);
            rightPtr++;
        }
        return maxCnt;
    }
};
// @lc code=end

