class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int missing = 1;
        while (s.count(missing)) {
            missing++;
        }
        return missing;
    }
};
