class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         int sz = s.length();
        int l=0, ans = 0;;
        set< char > ss;
        for(int r =0;r<sz;r++){
            while(ss.find(s[r])!= ss.end()){
                ss.erase(ss.find(s[l]));
                l++;
            }
            ss.insert(s[r]);
            ans = max(ans, r-l+1);
            
        }
        return ans;
    }
};
