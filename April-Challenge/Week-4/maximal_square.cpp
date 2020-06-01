class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        vector< vector< int > >dp(1001, vector< int>(1001, 0));
        int r = matrix.size();
        if(r==0) return 0;
        int ans =0;
        int c = matrix[0].size();
        for(int i=1;i<=r;i++){
            for(int j=1;j<=c;j++){
                if(matrix[i-1][j-1]=='1'){
                    dp[i][j] = min(dp[i-1][j], min(dp[i][j-1], dp[i-1][j-1]))+1;
                    ans = max(ans, dp[i][j]);
                }
            }
        }
        return ans*ans;
    }
};
