class Solution {
public:
    bool isSubsequence(string s, string t) {
                int s1 = s.length();
                int s2 = t.length();
                if(s1> s2) return 0;
                if(s1 == s2) return s ==t;
            int j=0;
            for(int i=0;i<s1;i++){
                while(j<s2){
                    if(s[i] == t[j]){
                        j++; break;
                    }
                   j++;
                    
                }
                if(j== s2){
                    if(i== s1-1) return t[j-1] == s[i];
                 
                    return 0;
                }
                
            }
      //  if(j<s2) return 0;
        return 1;
    }
};
