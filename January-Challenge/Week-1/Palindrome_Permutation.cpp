class Solution {
public:
    bool canPermutePalindrome(string s) {
        unordered_map< char, int > m;
        for(auto i:s) m[i]++;
        int cnt =0;
        for(auto i:m){
            if(i.second%2==1)++cnt;
            if(cnt>1) return 0;
        }
        return 1;
    }
};
