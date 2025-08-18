class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int num1=n*(n+1)/2;
        int num2=0;
        for(int num:nums){
            num2+=num; 
        }
        return num1-num2;
    }
};
