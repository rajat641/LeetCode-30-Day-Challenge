class Solution {
public:
    typedef pair< int, pair< int , int > >pi;
    int minimumEffortPath(vector<vector<int>>& heights) {
        int r = heights.size();
        int c = heights[0].size();
        if(r==0) return 0;
        int ans = 0;
        int prev = -1;
        map<pair< int, int > , int > vis;
        map<pair< int, int > , int > dis;
        priority_queue< pi, vector< pi > , greater< pi> > pq;
        pq.push({0, {0, 0}});
        for(int i =0;i<r;i++){
            for(int j=0;j<c;j++) dis[{i, j}] = INT_MAX;
        }
        while(!pq.empty()){
            auto p = pq.top(); pq.pop();
            if(p.second.first== r-1 && p.second.second==c-1) return p.first;
            if(vis[p.second]==1) continue;
            vis[p.second]=1;
            int x = p.second.first;
            int y = p.second.second;
            int effort = p.first;
            int neffort;
            if(x-1>=0){
                neffort = max(effort, abs(heights[x-1][y]- heights[x][y]));
                if(dis[{x-1, y}]>neffort){
                    dis[{x-1, y}] = neffort;
                    pq.push({neffort, {x-1, y}});
                }
            }
            if(y-1>=0){
                neffort = max(effort, abs(heights[x][y-1]- heights[x][y]));
                if(dis[{x, y-1}]>neffort){
                    dis[{x, y-1}] = neffort;
                    pq.push({neffort, {x, y-1}});
                }
            }
            if(x+1<r){
                neffort = max(effort, abs(heights[x+1][y]- heights[x][y]));
                if(dis[{x+1, y}]>neffort){
                    dis[{x+1, y}] = neffort;
                    pq.push({neffort, {x+1, y}});
                }
            }
            if(y+1<c){
                neffort = max(effort, abs(heights[x][y+1]- heights[x][y]));
                if(dis[{x, y+1}]>neffort){
                    dis[{x, y+1}] = neffort;
                    pq.push({neffort, {x, y+1}});
                }
        }}
        return ans==INT_MAX ? 0:ans;
    }
};
