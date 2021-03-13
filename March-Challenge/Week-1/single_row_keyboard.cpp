class Solution {
public:
    int calculateTime(string keyboard, string word) {
        unordered_map< char, int >M;
        int cnt = 0;
        for(auto &u:keyboard) M[u]= cnt++;
        int ans =0;
        int prev = 0;
        for(auto &u:word){
            ans += abs(prev - M[u]);
            prev = M[u];
        }
        return ans;
    }
};
