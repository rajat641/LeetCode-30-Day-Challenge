class Solution {
public:
    
    void dfs(vector<vector<int>>& grid , int i , int j, int &ans){
        if(i<0 || j<0 || j>= grid[0].size() || i>= grid.size() || grid[i][j]== -1 || grid[i][j]== 0) return ;
        grid[i][j]= -1;
        if(i-1 >=0 && grid[i-1][j]==0){ ans++;}
        if(i+1 < grid.size() && grid[i+1][j]==0) {ans++;}
        if(j-1 >=0 && grid[i][j-1]==0) {ans++;}
        if(j+1 < grid[0].size() && grid[i][j+1]==0) {ans++;}
        dfs(grid, i-1, j, ans);
        dfs(grid, i+1, j, ans);
        dfs(grid, i, j-1, ans);
        dfs(grid, i, j+1, ans);
        
    }
    
    
    int islandPerimeter(vector<vector<int>>& grid) {
        vector< vector< int > > new_grid;
        int R = grid.size();
        int C = grid[0].size();
        new_grid.resize(R+2, vector< int >(C+2, 0));
        for(int i=0;i<R;i++){
            for(int j=0;j<C; j++){
                new_grid[i+1][j+1] = grid[i][j];   
            }
        }
        int ans = 0;
        for(int i=0 ;i<R+2 ;i++){
            for(int j=0;j< C+2; j++){
                if(new_grid[i][j]==1){
                 //   cout<< i<<" "<<j;
                    dfs(new_grid, i, j, ans);
                    return ans;
                }
            }
        }
        return ans;
    }
};
