class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int prevpos = -1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                if(prevpos == -1) prevpos = i;
                else{
                    if(i-prevpos-1<k) return 0;
                    prevpos = i;
                }
              //  cnt =0;
            }
        }
        return 1;
    }
};
