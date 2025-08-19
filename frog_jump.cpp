class Solution {
public:
    bool canCross(vector<int>& stones) {
        int n = stones.size();
        unordered_map<int, set<int>> dp; 

        for (int stone : stones) {
            dp[stone] = {}; 
        }

        dp[0].insert(0); 
        for (int stone : stones) {
            for (int jump : dp[stone]) {
                for (int nextJump = jump - 1; nextJump <= jump + 1; nextJump++) {
                    if (nextJump > 0 && dp.count(stone + nextJump)) {
                        dp[stone + nextJump].insert(nextJump);
                    }
                }
            }
        }

        return !dp[stones.back()].empty();
    }
};
