class Solution {
public:
    void moveZeroes(vector<int>& nums) {
                int sz = nums.size();
                int l=0;
              for(int u=0;u<sz;u++){
                if(nums[u]!=0){
                    nums[l++] = nums[u];
                }    
                  
              }
            while(l<nums.size())nums[l++]=0;
    }
};
