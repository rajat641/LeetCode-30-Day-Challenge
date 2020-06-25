class Solution {
public:
    int singleNumber(vector<int>& nums) {
        vector< long long > ans(33, 0);
        long long sol =0;
        for(int i=0;i<32;i++){
        int sum=0;
            int mask = 1<<i;
            for(auto a:nums){
                if(a & mask){
                    sum++;
                    sum%=3;
                    
                }
            }
            if(sum==1) sol |= mask;
            
        }
        return sol;
       
    }
};
