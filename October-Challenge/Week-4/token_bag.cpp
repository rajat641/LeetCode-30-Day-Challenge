class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int P) {
        //map< int, int>m;
        //for(auto i:tokens) m[i]++;
        sort(begin(tokens), end(tokens));
        int ans = 0;
        int i =0;
        int cnt = 0;
        int j = tokens.size()-1;
        while(i<=j){
            if(P>=tokens[i]){
                ++cnt;
                ans = max(ans, cnt);
                P-=tokens[i];
                i++;
            }else{
                if(cnt>0){
                    --cnt;
                   // ans = max(ans, cnt);
                   P+=tokens[j];
                 j--;
                }else break;
                
            }
            
        }
        return ans;
    }
};
