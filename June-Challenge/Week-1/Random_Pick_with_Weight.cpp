class Solution {
public:
   vector < int >dp;
    int sz;
    Solution(vector<int>& w) {
       dp.resize(w.size(), 0);
        sz = w.size();
        dp[0] = w[0];
        for(int i=1;i<sz;i++){
            dp[i]=dp[i-1]+w[i];
        }
    }
    
    int pickIndex() {
        int limit  = dp[sz-1];
        int random_number = rand()%limit;
        return upper_bound(dp.begin(), dp.end(), random_number)- dp.begin();
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */
