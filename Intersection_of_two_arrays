class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>count;
        vector<int>result;
        for(int n1:nums1){
            count[n1]=1;
        }
        for(int n2:nums2){
            if(count[n2]==1){
                result.push_back(n2);
                count[n2]=0;
            }
        }
        return result;
    }
};
