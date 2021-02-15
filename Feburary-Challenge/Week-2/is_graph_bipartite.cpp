class Solution {
public:
    vector< int > col;
    vector< int > vis;
    bool dfs(vector< vector< int >>&gr, int in, int C){
        if(vis[in]==0){
                vis[in]=1;
              col[in] = C;
              int newC = (C==1?0:1);
                for(auto &k:gr[in]){
                    if((vis[k]==1 && col[k]==C && col[k]!= -1) || !dfs(gr, k, newC)) return 0;   
                }
        }
        return 1;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int N = graph.size();
        vector< vector< int > >gr(N);
        for(int i=0;i<N;i++){
            for(auto k:graph[i]){
                gr[i].push_back(k);
                gr[k].push_back(i);
            }
        }
        col.resize(N, -1);
        vis.resize(N, 0);
        for(int i=0;i<N;i++){
            if(!vis[i]){
                if(!dfs(gr, i, 0)) return 0;
            }
        }
        return 1;
    }
};
