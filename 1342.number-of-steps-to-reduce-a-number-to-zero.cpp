/*
 * @lc app=leetcode id=1342 lang=cpp
 *
 * [1342] Number of Steps to Reduce a Number to Zero
 */

// @lc code=start
class Solution {
public:
    int numberOfSteps(int num) {
        short cnt = 0;
        while(num){
            (!(num & 1)) ? num/=2 : num--;
            cnt++;
        }
        return cnt;
    }
};
// @lc code=end

