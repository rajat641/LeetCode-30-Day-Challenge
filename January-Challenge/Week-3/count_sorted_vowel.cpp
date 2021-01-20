class Solution {
public:
   // int cnt =0;
    unordered_map< int , unordered_map< int , int > > dp;
    int recur( vector< char >&temp, string s ,  vector< string>&ans , int N, int in){
        if(dp[s.length()][in]>0) return dp[s.length()][in];
         int cnt =0;
        if(s.length()==N){
           
            return dp[N][in]=1;
        }
       
        for(int j=in;j<5;j++){
                s+=temp[j];
                cnt+=recur(temp, s, ans, N, j);
                s.pop_back();
            
        }
        return dp[s.length()][in]= cnt;
    }
    int countVowelStrings(int n) {
        vector< char > temp ={'a', 'e', 'i', 'o', 'u'};
        vector< string > ans;
        string s = "";
        int in =0;
        return recur(temp, s, ans, n, in);
        
    }
};
