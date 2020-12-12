class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int S =0;
        for(auto i:nums) S+=i;
        if(S%2==1) return 0;
        S/=2;
        int sz = nums.size();
      //  sort(begin(nums), end(nums));
        vector< vector< int > >dp(sz+1, vector< int >(S+1, 0));
        for(int i=0;i<=sz;i++) dp[i][0]=1; // make sum as zero always true
    
        for(int i=1;i<=sz;i++){
            for(int j=1;j<=S;j++){
                if(j>=nums[i-1]) dp[i][j] = dp[i-1][j-nums[i-1]] | dp[i-1][j] ;
                else dp[i][j] = dp[i-1][j];
            }
        }
        return dp[sz][S];
    }
};
