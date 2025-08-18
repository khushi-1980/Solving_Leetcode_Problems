class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_set<int> seen;
        int result = 0;
        for (int n : nums) {
            if (seen.count(n)) { 
                result ^= n;
            } else {
                seen.insert(n);    
            }
        }
        return result;
    }
};
