/*
 * @lc app=leetcode id=415 lang=cpp
 *
 * [415] Add Strings
 */

// @lc code=start
class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans = "";
        bool carry = false;
        int i = num1.length()-1 , j = num2.length()-1;
        while(i>=0 || j>=0){
            int a = i >= 0 ? num1[i--] - '0' : 0 ;
            int b = j >= 0 ? num2[j--] - '0' : 0 ;
            int total = a + b + carry ;
            ans.push_back( '0' + (total % 10) ) ;
            carry = total/10;
        }
        if(carry)
            ans.push_back('1');
        reverse(ans.begin(), ans.end()) ;
        return ans;
    }
};
// @lc code=end

