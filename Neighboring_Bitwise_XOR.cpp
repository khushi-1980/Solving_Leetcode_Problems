class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int result=0;
        for(int n:derived){
            result^=n;
        }
        if(result==1){
            return false;
        }
        else{
            return true;
        }
    }
};
