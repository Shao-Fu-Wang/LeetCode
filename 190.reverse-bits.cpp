/*
 * @lc app=leetcode id=190 lang=cpp
 *
 * [190] Reverse Bits
 */

// @lc code=start
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t reversed = 0;
        for(int i = 0; i < 32; i++, n>>=1) {
            reversed = (reversed << 1) | (n & 1); 
        }
        return reversed;
    }
};
// @lc code=end

