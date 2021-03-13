class Solution {
public:
    int diff(int x){
         int P =x*(x+1);
        P/=2;
        return P;
    }
    int missingNumber(vector<int>& nums) {
        int S = 0;
        for(auto &u:nums) S+=u;
        return diff(nums.size())-S;
    }
};
