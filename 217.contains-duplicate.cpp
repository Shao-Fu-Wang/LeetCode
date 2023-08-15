/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */

// @lc code=start
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> cnt;
        for(auto i : nums){
            if(cnt[i]){
                return true;
            }
            else{
                cnt[i] = 1;
            }
        }
        return false;
    }
};
// @lc code=end

