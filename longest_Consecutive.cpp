class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        sort(nums.begin(), nums.end());
        int maxLen = 1;
        int currentLen = 1;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i-1]) continue; 
            else if (nums[i] == nums[i-1] + 1) currentLen++; 
            else currentLen = 1; 

            maxLen = max(maxLen, currentLen);
        }

        return maxLen;
    }
};
