/*
 * @lc app=leetcode id=1207 lang=cpp
 *
 * [1207] Unique Number of Occurrences
 */

// @lc code=start
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> occur;
        for(auto i : arr){
            occur[i]++;
        }
        unordered_set<int> ans;
        for(auto &[key, value] : occur){
            if(ans.count(value)){
                return false;
            }
            else{
                ans.insert(value);
            }
        }
        return true;
    }
};
// @lc code=end

