class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int local_sum = nums[0];
        int global_sum= nums[0];
        for(int u=1;u<nums.size();u++){
         //   if(local_sum+nums[u]>=local_sum) local_sum+=nums[u];
           // else local_sum = nums[u];
            local_sum+=nums[u];
            if(local_sum<=nums[u]) local_sum = nums[u];
            global_sum = max(global_sum, local_sum);
            
            
        }
        return global_sum;
        
    }
};
