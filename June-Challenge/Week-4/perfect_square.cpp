class Solution {
public:
    vector< int > dp;
    int recur(int n){
       if(n<2) return 1;
    for(int i=2;i<=n;i++){
        for(int j=1;j*j<=i;j++){   
            dp[i] = min(dp[i], dp[i-j*j]+1);
            
        }
        
    }
        return dp[n];
        
    }
    
    int numSquares(int n) {
        
        dp.resize(n+1, 300000);
        dp[1]=1;
        dp[0]=0;
        return recur(n);
    }
};
