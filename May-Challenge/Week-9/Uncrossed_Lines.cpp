class Solution {
public:
    int maxUncrossedLines(vector<int>& A, vector<int>& B) {
        int sz1 = A.size();
        int sz2 = B.size();
        vector< vector< int > >dp(sz1, vector< int>(sz2, 0));
        for(int i=0;i<sz1;i++){
            for(int j=0;j<sz2;j++){
                if(i==0 || j==0){
                    if(A[i]==B[j]) dp[i][j]=1;
                    else dp[i][j]= max(dp[max(i-1, 0)][j], dp[i][max(j-1, 0)]);
                }else{
                    if(A[i]==B[j]) dp[i][j] =1+dp[i-1][j-1];
                    else dp[i][j]= max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        
        return dp[sz1-1][sz2-1];
    }
};
