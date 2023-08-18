/*
 * @lc app=leetcode id=374 lang=cpp
 *
 * [374] Guess Number Higher or Lower
 */

// @lc code=start
/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long myAns = n/2;
        long upper = n;
        long lower = 0;
        int feedback = 0;
        while(true){
            feedback = guess(myAns);
            if(feedback == 0){
                return myAns;
            }
            else if(feedback == 1){  // guess too low
                lower = myAns+1;
            }
            else if(feedback == -1){  // guess too high
                upper = myAns-1;
            }
            myAns = (lower+upper)/2;
        }
        return -1; 
    }
};
// @lc code=end

