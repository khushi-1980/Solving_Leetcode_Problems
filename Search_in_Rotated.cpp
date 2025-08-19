#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        unordered_map<int,int> m; 
        for(int i = 0; i < nums.size(); i++){
            m[nums[i]] = i;        
        }

        if(m.find(target) != m.end()) {
            return m[target];     
        }
        return -1;               
    }
};
