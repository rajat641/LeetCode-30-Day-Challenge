class Solution {
public:
    int ans =0;
    void dfs(vector< vector< char > >&grid, int i, int j, vector< vector< int > >&vis){
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j]=='0' || vis[i][j]==1){
            return ;
        }
        vis[i][j]=1;
    //    ans++;
        dfs(grid, i-1,j,vis);
        dfs(grid, i+1,j,vis);
        dfs(grid, i,j-1,vis);
        dfs(grid, i,j+1,vis);
        
    }
    
    int numIslands(vector<vector<char>>& grid) {
            int r = grid.size();
            int maxans=0;
            if(r==0) return maxans;
            int c = grid[0].size();
            vector< vector< int > >vis(r,vector< int >(c, 0));
            for(int u=0;u<r;u++){
                for(int i=0;i<c;i++){
                    if(grid[u][i]=='1' && vis[u][i]==0){
                        ans ++;
                        dfs(grid, u, i,vis);
                        maxans = max(ans, maxans);
                    }
                }
            }
        return maxans;
        
    }
};
