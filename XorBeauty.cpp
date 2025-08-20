class Solution {
public:
    int xorBeauty(vector<int>& nums) {
        int result=0;
        for(int n:nums){
            result^=n;
        }
        return result;
    }
};
