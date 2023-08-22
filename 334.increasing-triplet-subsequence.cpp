/*
 * @lc app=leetcode id=334 lang=cpp
 *
 * [334] Increasing Triplet Subsequence
 */

// @lc code=start
// [5, 6, 2, 6]
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int firstNum = INT_MAX, secondNum = INT_MAX;
        for(auto num : nums){
            if(num <= firstNum){
                firstNum = num;
            }
            else if(num < secondNum){
                secondNum = num;
            }
            else if(num > firstNum && num > secondNum){
                return true;
            }
        }
        return false;
    }
};
// @lc code=end

