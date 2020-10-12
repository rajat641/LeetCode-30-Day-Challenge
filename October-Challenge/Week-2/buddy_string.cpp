class Solution {
public:
    void swap(int x, int y, string &s){
        char c = s[x];
        s[x] = s[y];
        s[y] =  c;
        
    }
    
    bool buddyStrings(string A, string B) {
  
         vector< int > in;
        if(A.length() != B.length()) return false;
        int sz = A.length();
        for(int u=0;u<sz;u++){
            if(A[u]!=B[u]) in.push_back(u);
            
        }
        if(in.empty()){
            // check for duplicates
            unordered_set< int > s;
             for(int u=0;u<sz;u++){
                 if(s.find(A[u])!=s.end()) return true;
                 else s.insert(A[u]);
             }
            return false;
        }
        if(in.size()>2) return false;
        if(in.size()==1) return false;
        swap(in[0], in[1], A);
        return A==B;
        
        
    }
};
