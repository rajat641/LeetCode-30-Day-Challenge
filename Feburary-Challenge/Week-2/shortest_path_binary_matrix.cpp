class Solution {
public:
    typedef pair< int, pair< int , int > >pi;
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
       // return -1;
        priority_queue< pi, vector< pi> , greater<pi>>pq;
        int r = grid.size()-1;
        int c = grid[0].size()-1;
        if(grid[0][0]==0) pq.push({1,{0, 0}});
        map< pair< int , int > , int > vis;
        vector< int > R={-1, 0, 1};
        vector< int > C={-1, 0, 1};
       // cout<<pq.size()<<endl;
        while(!pq.empty()){
            auto p = pq.top(); pq.pop();
            int x = p.second.first;
            int y = p.second.second;
            if(vis[{x, y}]==1) continue;
            vis[{x, y}]=1;
            if(x==r && y==c) return p.first;
            for(auto &i:R){
                for(auto &j:C){
                    if(i== 0 && j==0) continue;
                    int newx = x+i;
                    int newy = y+j;
                    if(newx>=0 && newy>=0 && newx<=r && newy<=c && grid[newx][newy]==0){
                        pq.push({1+p.first,{newx, newy}});
                    }
                }
            }
        }
        return -1;
    }
};
