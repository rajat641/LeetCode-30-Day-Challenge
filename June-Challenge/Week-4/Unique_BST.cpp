class Solution {
public:
    int  recur(int n , vector< int >&dp){
        if(n<=1) return 1;
        
        if(dp[n]) return dp[n];
        int res =0;
        for(int i=1;i<=n;i++){
            res+= recur(i-1, dp) *recur(n-i, dp);
        }
        return dp[n]=res;
        
    }
    
    int numTrees(int n) {
        vector< int > dp(n+2, 0);
     
        return recur(n, dp);
        
    }
};
