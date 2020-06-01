class Solution {
public:
    int minDistance(string word1, string word2) {
        int sz1 = word1.length();
        int sz2  = word2.length();
        vector< vector< int > > dp(sz1+1, vector< int>(sz2+1, 0));
        dp[0][0]=0;
        for(int i=0;i<=sz1;i++){
            for(int j=0;j<=sz2;j++){
                if(i==0 || j==0){
                    dp[i][j] = (i==0)? j:i;
                    continue;
                }
                
                if(word1[i-1]!= word2[j-1]){
                    dp[i][j]= min(dp[i-1][j], min(dp[i-1][j-1], dp[i][j-1]))+1;
                }else{
                    dp[i][j] = dp[i-1][j-1];
                }
                
            }
        }
        return  dp[sz1][sz2];
     }
};
