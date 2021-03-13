class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
            vector< int > m(amount+1, 93232);
        m[0]=0;
            for(auto u:coins){
                for(int i=1;i<=amount;i++){
                    if(i>=u) m[i] = min(m[i], m[i-u]+1);
                }
            }
        return m[amount]==93232 ? -1: m[amount];
    }
};
