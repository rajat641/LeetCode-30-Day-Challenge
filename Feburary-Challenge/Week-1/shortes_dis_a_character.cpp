class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int sz  = s.length();
        vector< int > fro(sz, -1);
        vector< int > bac(sz, -1);
        vector< int > ans(sz, 0);
        for(int i=0;i<sz;i++){
            if(s[i]==c) fro[i] = i;
            else{
                if(i>0) fro[i] = fro[i-1];
                //else fro[i] = INT_MAX;
            }
        }
        for(int i=sz-1;i>=0;i--){
            if(s[i]==c) bac[i] = i;
            else{
                if(i!=sz-1) bac[i] = bac[i+1];
                //else bac[i] = INT_MAX;
            }
        }
        for(int i=0;i<sz;i++){
            if(s[i]==c) continue;
            if(fro[i]==-1 || bac[i]==-1){
                ans[i] = fro[i]== -1 ? (bac[i]-i): i-fro[i];
            }
            else ans[i] = min(i-fro[i], bac[i]-i);
        }
        return ans;
    }
};
