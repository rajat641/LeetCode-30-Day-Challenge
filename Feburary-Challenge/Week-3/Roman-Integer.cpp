class Solution {
public:
    map< char , int>m;
    int romanToInt(string s) {
        m['I']=1;
        m['V']=5;
        m['X']=10;
        m['L']=50;
        m['C']=100;
        m['D']=500;
        m['M']=1000;
        int ans =0;
        int sz = s.length();
        for(int i=0;i<sz;i++){
            if(i<sz-1 && m[s[i]]<m[s[i+1]]) ans-=m[s[i]];
            else ans+=m[s[i]];
        }
        return ans;
        
    }
};
