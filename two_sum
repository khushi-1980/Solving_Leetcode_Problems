class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        map<int,int>m;

        for(int i=0;i<n;i++){
            int remaining=target-nums[i];

            if(m.find(remaining)!=m.end()){
                return{m[remaining],i};
            }
            m[nums[i]] = i;

        }
        return{};
    }
};
