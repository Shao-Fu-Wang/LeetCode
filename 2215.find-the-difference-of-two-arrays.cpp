/*
 * @lc app=leetcode id=2215 lang=cpp
 *
 * [2215] Find the Difference of Two Arrays
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());
        vector<int> vec1, vec2;
        for(auto i : set1){
            if(!set2.count(i)){
                vec1.push_back(i);
            }
        }
        for(auto i : set2){
            if(!set1.count(i)){
                vec2.push_back(i);
            }
        }
        return {vec1, vec2};
    }
};
// @lc code=end

