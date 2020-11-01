class Solution {
public:
   int findNumberOfLIS(vector<int>& nums) {
            int sz = nums.size();
            vector< int >lis(sz+1,1);
            vector< int >cnt(sz+1, 1);
            int ans = 1;
        for(int i=0;i<sz;i++){
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j]){
                    if(lis[i]<lis[j]+1){
                        lis[i]=  lis[j]+1;
                        cnt[i] = cnt[j];
                    }else if(lis[i]==lis[j]+1){
                        lis[i] = lis[j]+1;
                        cnt[i]+=cnt[j];
                    }
                }
                
            }
            
            ans = max(ans, lis[i]);
        }
       
       int sol =0;
       for(int i=0;i<sz;i++){
           if(lis[i]==ans) sol+=cnt[i];
       }
       return sol;
    }
};
