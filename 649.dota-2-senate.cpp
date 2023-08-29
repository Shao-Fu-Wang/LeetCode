/*
 * @lc app=leetcode id=649 lang=cpp
 *
 * [649] Dota2 Senate
 */

// @lc code=start
class Solution {
public:
    string predictPartyVictory(string senate) {
        int rCnt = 0, dCnt = 0;
        int rBan = 0, dBan = 0;
        queue<char> q;
        for(auto c : senate){
            if(c == 'R'){++rCnt;}
            else if(c == 'D'){++dCnt;}
            q.push(c);
        }
        while(rCnt && dCnt){
            char nowSenate = q.front();
            q.pop();
            if(nowSenate == 'R'){
                if(rBan){
                    rBan--;
                    rCnt--;
                }
                else{
                    dBan++;
                    q.push(nowSenate);
                }
            }
            else if(nowSenate == 'D'){
                if(dBan){
                    dBan--;
                    dCnt--;
                }
                else{
                    rBan++;
                    q.push(nowSenate);
                }
            }
        }
        return (rCnt ? "Radiant" : "Dire"); 
    }
};
// @lc code=end

