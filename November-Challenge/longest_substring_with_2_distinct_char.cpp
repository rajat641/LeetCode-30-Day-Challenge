class Solution {
public:
    int lengthOfLongestSubstringTwoDistinct(string s) {
        unordered_map< char, int > m;
        int l =0, ans =0;
        for(int r =0;r<s.length();r++){
            m[s[r]]++;
            while(m.size()>2){
                    m[s[l]]--;
                 if(m[s[l]]==0) m.erase(s[l]);
                l+=1;
            }
            ans = max(ans, r-l+1);
        }
        return ans;
    }
};
