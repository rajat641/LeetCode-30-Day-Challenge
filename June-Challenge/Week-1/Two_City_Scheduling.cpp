class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        priority_queue< pair< int , pair< int , int > >, vector<pair< int , pair< int , int > > >, greater<> >q;
        for(auto i:costs){
         q.push({i[0]-i[1], {i[0], i[1]}});
        }
        int sz = costs.size();
        int mincost =0;
        for(int i=1;i<=sz;i++){
            pair< int , pair< int , int > >w = q.top(); q.pop();
            if(i<=(sz/2)){
                mincost+=w.second.first;
                
            }else{
                mincost+=w.second.second;
            }
            
            
        }
        return mincost;
        
    }
};
