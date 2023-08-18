    /*
    * @lc app=leetcode id=11 lang=cpp
    *
    * [11] Container With Most Water
    */

    // @lc code=start
    class Solution {
    public:
        int maxArea(vector<int>& height) {
            int leftPtr = 0, rightPtr = height.size()-1, maxVol = 0;
            while(rightPtr > leftPtr){
                int curVol = (rightPtr-leftPtr) * min(height[rightPtr], height[leftPtr]);
                if(maxVol < curVol){
                    maxVol = curVol;
                }      
                height[rightPtr] > height[leftPtr] ? leftPtr++ : rightPtr--;
            }
            return maxVol;
        }
    };
    // @lc code=end

