class Solution {
public:
    bool isOneEditDistance(string s, string t) {
        int sz1 = s.length();
        int sz2 = t.length();
        if(abs(sz1-sz2)>=2) return 0;
        if(s==t) return 0;
        // delete
        for(int i=0;i<sz1;i++){
            if(s.substr(0, i)+ s.substr(i+1) == t) return 1;
        }
        for(int i=0;i<sz2;i++){
            if(t.substr(0, i)+ t.substr(i+1) == s) return 1;
        }
        if(sz1== sz2){
            int cnt = 0;
            for(int i=0;i<sz1;i++){
                if(t[i]!= s[i])++cnt;
                if(cnt>1) return 0;
            }
            if(cnt<=1) return 1;
        }
       
        return 0;
        }
       
    
};
