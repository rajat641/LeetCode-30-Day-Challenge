class Solution {
public:
    vector< vector< int > > vis;
    
    void dfs(vector<vector< int > >&grid, int x, int y,vector< vector< int > >&m){
        if(x<0 || y<0 ||x>=grid.size() || y>=grid[0].size() || grid[x][y]==0 || vis[x][y]==1) return ;
        if(vis[x][y]==0){
            vis[x][y]=1;
            m.push_back({x, y});
            dfs(grid, x-1, y,m);
            dfs(grid, x+1, y,m);
            dfs(grid, x, y+1,m);
            dfs(grid, x, y-1,m);
        }
        return;
    }
    
    int numDistinctIslands(vector<vector<int>>& grid) {
        int r = grid.size();
        int c  = grid[0].size();
        if(r==0) return 0;
        map< vector<vector< int > > , int > temp;
        vis.resize(r, vector< int >(c, 0));
        for(int i =0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]==1){
                    vector< vector< int > >m;
                    dfs(grid, i, j,m);
                    if(m.empty()) continue;
                    sort(begin(m),end(m));
                    cout<<m.size()<<endl;
                    //cout<<m[0][0]<<" "<<m[0][1]<<endl;
                    int oldx = m[0][0];
                    int oldy = m[0][1];
                    m[0][0]= 0;
                    m[0][1]= 0;
                    for(int k=1;k<m.size();k++){
                        m[k][0]-=oldx;
                        m[k][1]-=oldy;
                    }
                    sort(begin(m),end(m));
                    if(!m.empty())temp[m]=1;
                    m.clear();
                }
            }
        }
        return (int)temp.size();
    }
};
