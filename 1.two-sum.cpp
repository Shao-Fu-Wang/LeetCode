/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> store;

        for (int i = 0; i < nums.size(); i++) {
            int num_to_find = target - nums[i];
            if (store.find(num_to_find) != store.end()) {
                return vector<int>{store[num_to_find], i};
            } 
            else {
                store[nums[i]] = i;
            }
        }
        return {};
    }
};
// @lc code=end

