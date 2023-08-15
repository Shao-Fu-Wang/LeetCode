/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start

class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> table;
        table[')'] = '(';
        table['}'] = '{';
        table[']'] = '[';

        stack<char> paraStack;
        for(auto i : s){
            if(!paraStack.empty() && paraStack.top() == table[i]){
                paraStack.pop();
            }
            else{
                paraStack.push(i);
            }
        }
        return paraStack.empty();
    }
};

// @lc code=end

