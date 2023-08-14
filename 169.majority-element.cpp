/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> cnt;
        for(auto i : nums){
            cnt[i]++;
        }
        for(auto i : cnt){
            if(i.second > nums.size()/2){
                return i.first;
            }
        }
        return 0;
    }
};
// @lc code=end

