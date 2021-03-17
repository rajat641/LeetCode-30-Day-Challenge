/*

[1,2,3,4,5,6,3,2,1,2,3]

profit[i] = max(profit[i-1], price[i]-(price[j]+fee-profit[j-1]));

*/

class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int sz = prices.size();
        vector< int >DP(sz+1, 0);
        int mm=INT_MAX;
        for(int i=1;i<=sz;i++){
            mm = min(mm, prices[i-1]+fee-DP[i-1]);
            DP[i] = max(DP[i-1], prices[i-1]-mm);
        }
        return DP[sz];
    }
};
