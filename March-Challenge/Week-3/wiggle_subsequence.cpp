class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int sz = nums.size();
        vector< pair< int, int> >dp(1001, {0, 0});
        dp[nums[0]]={1,1};
        int ans = 1;
        for(int i=1;i<sz;i++){
            int num = nums[i]-1;
            int N =  nums[i]+1;
            int K1 = 0;
            int K2 = 0;
            while(num>=0){
                
                K1 = max(K1,dp[num].first); //break;
                
                num--;
            }
            while(N<=1000){
               // if(dp[N]) {
                    K2 = max(K2,dp[N].second); //break;
                //}
                ++N;
            }
            dp[nums[i]] = {K2+1, K1+1};
            ans = max(ans, dp[nums[i]].first);
             ans = max(ans, dp[nums[i]].second);
        }
        return ans;
    }
};
