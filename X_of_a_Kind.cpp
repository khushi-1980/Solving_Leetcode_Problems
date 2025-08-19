class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int> count;

        
        for(int n : deck){
            count[n]++;
        }

        int g = 0;
       
        for(auto &[key, value] : count){
            g = gcd(g, value);
        }

        
        return g >= 2;
    }
};
