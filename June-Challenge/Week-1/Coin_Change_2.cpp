// 0
    
// 1 2 3

//  0  1 2 5
// 0 0 1 1 1
// 1 0 1 1 1
// 2 0 1 2 1    
// 3 0  
// 4
// 5
    
    
class Solution {
public:
      vector< int >dp;
    int ans =0;
    int recur(int amount , vector< int > coins , int start, int sz){
        
        if(amount ==0) return 1; 
        if(amount <0 || sz<0) return 0;
       
        
        if(dp[sz][amount]!= -1) return dp[sz][amount];
         dp[sz][amount] = coins[sz]<=amount ? recur(amount-coins[sz], coins, start,sz)+recur(amount, coins, start,sz-1) :recur(amount, coins, start,sz-1);
        
        return dp[sz][amount];
        
    }
    
    int change(int amount, vector<int>& coins) {
        
        int sz = coins.size();
        dp.resize(5001, vector< int >(5001, -1));
        return recur(amount , coins, 0, sz-1);
        //int sum =0;
    
        
       // return dp[amount][sz];
        
        
    }
};
