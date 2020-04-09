class Solution {
public:
    bool backspaceCompare(string S, string T) {
        if(S==T) return true;
        vector< char> v;
        vector< char> prev;
        while(1){
            int sz = S.length();
            prev = v;
            v.clear();
            for(int u=0;u<sz;u++){
                if(S[u]=='#' && u>0 && S[u-1]!='#' && !v.empty()){
                    v.pop_back();
                }else v.push_back(S[u]);
            }
            S="";
            for(int u=0;u<v.size();u++) S+=v[u];
          //  cout<< S<<endl;
            if(prev==v) break;
          //  v.clear();
        }
        v.clear();
        prev.clear();
        string J= S;
        for(int k=0;k<S.length();k++){
            if(J[k]=='#') continue;
            else{
                S = J.substr(k, J.length()-k); break;
            }
        }
        while(1){
            int sz = T.length();
            prev = v;
            v.clear();
            for(int u=0;u<sz;u++){
                if(T[u]=='#' && u>0 && T[u-1]!='#'){
                    v.pop_back();
                }else v.push_back(T[u]);
            }
            T="";
            for(int u=0;u<v.size();u++) T+=v[u];
            if(prev==v) break;
            
        }
        J= T;
        for(int k=0;k<T.length();k++){
            if(J[k]=='#') continue;
            else{
                T = J.substr(k, J.length()-k); break;
            }
        }
        cout<< S<< T;
        return S==T;
    }
};
