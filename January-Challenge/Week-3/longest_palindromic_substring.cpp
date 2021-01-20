class Solution {
public:
    string longestPalindrome(string s) {
         int sz = s.length();
         int in = -1;
        int len = 0;
         int maxlen = 0;
        vector< vector< int > >dp(sz, vector< int >(sz, 0));
        for(int i=0;i<sz;i++){
            dp[i][i]=1;
            maxlen = 1; len = 1; in = 0;
        }
        for(int i=0;i<sz-1;i+=1){
            if(s[i]==s[i+1]){
                dp[i][i+1]=1;
               // len = 2;
                
            }
            if(dp[i][i+1]==1){
                maxlen = 2;
                in =i;
            }
        }
        for(int i=3;i<=sz;i++){
            for(int j=0;j<=sz-i;j++){
                int st = j;
                int en = j+i-1;
                if(s[st]== s[en] ){
                    if(dp[st+1][en-1]) dp[st][en]=1;   
                }
                if(dp[st][en]==1){
                    if(maxlen<=i){
                        maxlen =i;
                        in = j;
                    }
                }
            }
        }
        return in == -1 ? "": s.substr(in, maxlen);
    }
};
