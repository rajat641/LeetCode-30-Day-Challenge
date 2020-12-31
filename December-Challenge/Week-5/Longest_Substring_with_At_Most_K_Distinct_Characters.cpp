class Solution {
public:
    int lengthOfLongestSubstringKDistinct(string s, int k) {
        map< char, int > m;
        int l=0, ans = 0;
        for(int r =0;r<s.length();r++){
            m[s[r]]++;
            while(l<=r && m.size()>k){
                m[s[l]]--;
                if(m[s[l]]==0) m.erase(s[l]);
                l++;
            }
            ans = max(ans, r-l+1);
        }
        return ans;
    }
};
