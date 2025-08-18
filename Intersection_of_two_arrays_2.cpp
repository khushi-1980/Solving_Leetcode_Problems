class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>count;
        vector<int>answer;
        for(int n1:nums1){
            count[n1]++;
        }
        for(int n2:nums2){
            if(count[n2]>0){
                answer.push_back(n2);
                count[n2]--;
            }
        }
        return answer;
    }
};
