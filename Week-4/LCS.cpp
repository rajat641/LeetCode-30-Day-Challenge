class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        vector< vector< int > >dp(1001,vector< int >(1001, 0));
        int sz1 = text1.size();
        int sz2 = text2.size();
        for(int u=1;u<=sz1;u++){
            for(int j=1;j<=sz2;j++){
                if(text1[u-1]==text2[j-1]){
                    dp[u][j]= dp[u-1][j-1]+1;
                    
                }else dp[u][j]=max(dp[u-1][j], dp[u][j-1]);
            }
        }
        return dp[sz1][sz2];
    }
};
