class Solution {
public:
    int nthUglyNumber(int n) {
        vector< int > prime = {2,3,5};
        priority_queue< long , vector< long > , greater<>>q;
        unordered_map<  long   , long > m;
        q.push(1);
        vector< long > sol(1999);
        int u=0;
      
      for(int p=1;p<=n;p++){
                int sz = q.size();
                 long k = q.top();  q.pop();
                  sol[u++] = k;
                 for(auto j:prime){
                     if(m.find(k*j)==m.end()){
                         m[k*j]=1;
                         q.push(k*j);
                         sol.push_back(k*j);
                     }
                 }    
        }
         return sol[n-1];
        
    }
};
