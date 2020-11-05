class Solution {
public:
    int maxPower(string s) {
            map< char, int> ss;
            int l =0;
        int ans = 0;
            for(int r =0;r<s.length();r++){
                ss[s[r]]++;
                while(l<r && ss.size()>1){
                    ss[s[l]]--;
                    if(ss[s[l]]<=0) ss.erase(s[l]);
                    l++;
                }
                
                ans = max(ans, r-l+1);
            }
        return ans;
    }
};
