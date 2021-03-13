class Solution {
public:
    bool ispalin(string s){
        int  i=0;
        int j = s.length()-1;
        while(i<=j){
            if(s[i]!=s[j]) return 0;
            i++;
            --j;
        }
        return 1;
    }
    int removePalindromeSub(string s) {
        if(s=="") return 0;
        unordered_map< char, int > m;
        if(ispalin(s)) return 1;
        for(auto u:s){
            m[u]++;
            if(m.size()==2){
                return  2;
            }
        }
        return 1;
    }
};
