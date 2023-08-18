/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int leftPtr = 0, rightPtr = 0, maxNum = 0;
        while(rightPtr <= prices.size()-1){
            if(prices[leftPtr] > prices[rightPtr]){
                leftPtr = rightPtr;
            }
            else if(maxNum <  prices[rightPtr] - prices[leftPtr]){
                maxNum = prices[rightPtr] - prices[leftPtr];
            }        
            rightPtr++;
        }
        return maxNum;
    }
};
// @lc code=end

