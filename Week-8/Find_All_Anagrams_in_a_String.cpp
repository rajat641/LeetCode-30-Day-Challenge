class Solution {
public:
    
  //  1 2 3 4 5 6 7  1 2 3
    vector<int> findAnagrams(string s, string p) {
        map< char , int > m;
        for(auto i:p) m[i]++;
        int st = 0;
        int en = p.length();
        vector< int > ans;
        int sz = s.length();
        if(en+1>sz){
          return ans;  
        }
      //  en-=p.length();
        map< char, int > t;
        for(int i=st;i<en;i++){
            t[s[i]]++;
        }
      //  vector< int > ans;
        while(en<sz){
            if(t==m){
                ans.push_back(st);
            }
            t[s[en++]]++;
            t[s[st]]--;
            if(t[s[st]]<=0){
                t.erase(s[st]);
            }
            st++;
         //   t[s[en++]]++;
            
        }
         if(t==m){
                ans.push_back(st);
            }
        return ans;
    }
};
