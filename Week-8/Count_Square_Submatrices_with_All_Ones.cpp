class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        
        int r = matrix.size();
        if(r==0) return 0;
        int c = matrix[0].size();
        int ans  =0;
        vector< vector< int > > dp(r, vector< int >(c, 0));
        for(int u=0;u<c;u++){
                ans +=matrix[0][u];
                dp[0][u] =matrix[0][u];
        }
        for(int u=1;u<r;u++){
                ans +=matrix[u][0];
                dp[u][0]= matrix[u][0];
        }
        
        //cout<< ans<<endl;
        for(int i=1;i<r;i++){
            for(int j=1;j<c;j++){
                if(matrix[i][j]==1){
                 //   ans++;
                    dp[i][j]= min(min(dp[i-1][j], dp[i][j-1]), dp[i-1][j-1])+1;
                    ans += dp[i][j];
                }
                
            }
            
        }
        return ans;
    }
};
