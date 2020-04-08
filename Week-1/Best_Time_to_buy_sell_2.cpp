class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sz = prices.size();
        int ans=0;
        for(int u=0;u<sz-1;u++){
            if(prices[u+1]>prices[u]) ans+=(prices[u+1]-prices[u]);
        }
        return ans;
    }
};
