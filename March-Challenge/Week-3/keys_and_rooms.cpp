class Solution {
public:
    vector< int > vis;
    vector< vector< int > >gr;
    void dfs(int v){
        if(!vis[v]){
            vis[v]=1;
            for(auto &u:gr[v]){
                dfs(u);
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int sz = rooms.size();
        vis.resize(sz, 0);
        gr.resize(sz);
        for(int i=0;i<sz;i++){
            for(auto &u:rooms[i]){
                gr[i].push_back(u);
            }
        }
        dfs(0);
        for(int i=0;i<sz;i++){
            if(!vis[i]) return 0;
        }
        return 1;
    }
};
