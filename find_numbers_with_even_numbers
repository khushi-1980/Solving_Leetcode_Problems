class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int digits = 0;
        for (int i = 0; i < nums.size(); i++) {
            int elem = nums[i];

            int count = 0;
            while (elem > 0) {
                elem = elem / 10;
                count++;
            }

            if (count % 2 == 0) {
                digits++;
            }
        }

        return digits;
    }
};
