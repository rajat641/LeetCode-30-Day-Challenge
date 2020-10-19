class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
            int sz = prices.size();
           int mm = INT_MAX;
           int ans =0;
        if(2*k>=sz){
            for(int i=1;i<sz;i++){
            if(prices[i]>prices[i-1]) ans+=prices[i]-prices[i-1];
           }
            return ans;
        }
            vector< vector< int > >dp(k+1, vector<int >(sz+1, 0));
        for(int i=0;i<=sz;i++) dp[0][i]=0;
           for(int i=1;i<=k;i++){
               mm = prices[0];
               for(int j=1;j<sz;j++){
                   
                   mm= min(mm, prices[j]-dp[i-1][j-1]);
                   dp[i][j]= max(dp[i][j-1], prices[j]-mm);
               
               }
              
           }
        return dp[k][sz-1];
    }
};
