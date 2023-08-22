/*
 * @lc app=leetcode id=1679 lang=cpp
 *
 * [1679] Max Number of K-Sum Pairs
 */

// @lc code=start
class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int cnt = 0, startPtr = 0, endPtr = nums.size()-1;
        while(startPtr < endPtr){
            if(nums[startPtr] + nums[endPtr] == k){
                cnt++;
                startPtr++, endPtr--;
            }
            else if(k - nums[startPtr] > nums[endPtr]){
                startPtr++;
            }
            else{
                endPtr--;
            }
        } 
        return cnt;
    }
};
// @lc code=end

