class Solution {
public:
    int firstUniqChar(string s) {
      //  vector< int > m(27, -1);
        unordered_map< char , int >m;
        int sz = s.length();
        for(int u=0;u<sz;u++){
            m[s[u]]++;
        }
        for(int u=0;u<sz;u++){
            if(m[s[u]]==1) return u;
        }
        return -1;
            
    }
};
