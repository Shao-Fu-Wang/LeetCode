/*
 * @lc app=leetcode id=202 lang=cpp
 *
 * [202] Happy Number
 */

// @lc code=start
class Solution {
public:
    int nextNum(int n){
        int next = 0;
        while(n){
            next += (n%10)*(n%10);
            n /= 10;
        }
        return next;
    }
    bool isHappy(int n) {
        int slowPtr = n;
        int fastPtr = nextNum(n);
        while(slowPtr!=1 && fastPtr!=slowPtr){
            slowPtr = nextNum(slowPtr);
            fastPtr = nextNum(nextNum(fastPtr));
        }
        return slowPtr==1;
    }
};
// @lc code=end

