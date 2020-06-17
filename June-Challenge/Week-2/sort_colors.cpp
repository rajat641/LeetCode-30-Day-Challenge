class Solution {
public:
    void sortColors(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int zero =0;
        int one  = 0;
        int sz = nums.size();
        for(auto i:nums){
            if(i==0) zero++;
            if(i==1) one++;
        }
        int two=  sz-zero-one;
        for(int i=0;i<sz;i++){
            if(zero >0){
                nums[i] = 0;
                --zero;
            }
            else{
                if(one > 0){
                    nums[i] = 1;
                    --one;
                }else{
                    nums[i] = 2;
                    --two;
                }
                
            }
            
            
        }
        
      //  return nums;
    }
};
