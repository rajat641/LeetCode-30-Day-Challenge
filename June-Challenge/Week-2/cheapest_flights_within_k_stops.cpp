class Solution {
public:
  
    
    int dij(vector< int >&vis, int src, int dest, int &k, vector<vector<int>>& flights, int & ans, vector< vector<pair< int, int > > >gr){
        
        priority_queue< vector< int > , vector< vector< int > >,greater< vector< int >  > >q; // minq used
        q.push({0, 0, src});
        int stop =0;
       // vis[src]=0;
        while(!q.empty()){
           vector < int > w = q.top(); q.pop();
            if(w[2] == dest) return w[0];
            if(w[1]>k) continue;
            for(auto i:gr[w[2]]){
                vector< int > temp ={w[0]+i.first, w[1]+1, i.second};
                q.push(temp);
            }   
        }
        return -1;
              
}
         
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int K) {
        vector< vector<pair< int, int > > >gr(n+2);
        for(auto i:flights){
            gr[i[0]].push_back({i[2], i[1]});
        
        }
        int ans = INT_MAX; // final solution
        vector< int > vis(n+1, INT_MAX); // all distances from some node so inf ar start
        return dij(vis, src, dst, K,flights, ans, gr);
        
        //return ans==INT_MAX ? -1: ans;
    }
};

// class Solution {
// public:
//     int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int K) {
//         vector< long > dp(n, INT_MAX);
//         dp[src] =0;
//       //  if(K==0) return -1;
//         for(int i=0;i<=K;i++){
//             int sz = flights.size();
//             vector< long > dp1 =dp;
//             for(int u=0;u<sz;u++){
//                 vector< int > temp = flights[u];
//                // if(dp1[temp[1]]>dp1[temp[0]]+ temp[2]){
//                     dp1[temp[1]]=  min(dp1[temp[1]],dp[temp[0]]+ temp[2]);
//                 //}
                
//             }
//             dp=  dp1;
//         }
//         if(dp[dst]==INT_MAX) return -1;
//         else return dp[dst];
        
//     }
// };
