/*
 * @lc app=leetcode id=219 lang=cpp
 *
 * [219] Contains Duplicate II
 */

// @lc code=start
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> cnt;
        for(int i=0; i < nums.size(); i++){
            if(cnt.contains(nums[i])){
                if(i - cnt[nums[i]] <= k){
                    return true;
                }
            }
            cnt[nums[i]] = i;
        }
        return false;
    }
};
// @lc code=end

