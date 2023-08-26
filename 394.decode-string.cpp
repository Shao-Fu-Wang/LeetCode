/*
 * @lc app=leetcode id=394 lang=cpp
 *
 * [394] Decode String
 */

// @lc code=start
class Solution {
public:
    string decodeString(string s) {
        stack<string> st;
        string ans = "", numStr;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ']') {
                string alphaStr = "";
                while (!st.empty() && st.top() != "[") {
                    alphaStr = st.top() + alphaStr;
                    st.pop();
                }
                st.pop();  // Pop the "["

                while (!st.empty() && isdigit(st.top()[0])) {
                    numStr = st.top() + numStr;
                    st.pop();
                }
                int n = stoi(numStr);

                stringstream ss;
                for (int k = 0; k < n; k++) {
                    ss << alphaStr;
                }
                st.push(ss.str());
                numStr = "";
            } else {
                string str(1, s[i]);
                st.push(str);
            }
        }

        while (!st.empty()) {
            ans = st.top() + ans;
            st.pop();
        }

        return ans;
    }
};

// @lc code=end

