class Solution {
public:
    bool isAnagram(string s, string t) {
        vector< int >ans(26, 0);
        for(auto &i:s) ans[i-'a']++;
        for(auto &i:t) ans[i-'a']--;
        for(int i=0;i<26;i++){
            if(ans[i]!=0) return 0;
        }
        return 1;
    }
};
