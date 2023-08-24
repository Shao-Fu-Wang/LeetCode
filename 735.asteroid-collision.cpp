    /*
    * @lc app=leetcode id=735 lang=cpp
    *
    * [735] Asteroid Collision
    */

    // @lc code=start
    class Solution {
    public:
        vector<int> asteroidCollision(vector<int>& asteroids) {
            int slowPtr = -1, fastPtr = 0;
            while (fastPtr < asteroids.size()) {
                if (slowPtr < 0 || asteroids[slowPtr] < 0 || asteroids[fastPtr] > 0) {
                    asteroids[++slowPtr] = asteroids[fastPtr];
                } 
                else if (asteroids[slowPtr] <= -asteroids[fastPtr]) {
                    if(asteroids[slowPtr] < -asteroids[fastPtr]) {
                        --fastPtr;
                    }
                    --slowPtr;
                }
                ++fastPtr;
            }
            
            return { asteroids.begin(), asteroids.begin()+ slowPtr + 1};
        }
    };
    // @lc code=end

    //[-2,-1,1,2]
