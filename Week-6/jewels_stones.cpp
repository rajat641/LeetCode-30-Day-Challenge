class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_map< char, int > m;
        for(auto i:J)m[i]=1;
        int ans =0;
        for(auto i:S){
            ans+=m[i];
        }
        return ans;
    }
};
