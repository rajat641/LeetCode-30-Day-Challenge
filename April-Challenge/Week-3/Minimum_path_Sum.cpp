class Solution {
public:
    int sol =INT_MAX;
    void minpath1(vector<vector<int>>& grid, int i, int j, int ans){
        if(i<0 || i>=grid.size()|| j<0 || j>=grid[0].size() || grid[i][j]== -100) return ;
        if(i+1==grid.size() && j+1==grid[0].size()){
            ans+=grid[i][j];
            sol = min(ans, sol);
            cout<<"--------------------"<<endl;
            return;
        }
   //     if(dp.find({i, j})!=dp.end()) ans+=grid[i][j]; return ;
        cout<<i<<" "<<j<<"-"<<ans<<endl;
        ans+=grid[i][j];
        int c = grid[i][j];
        grid[i][j]= -100;
        minpath1(grid, i+1, j, ans);
        minpath1(grid, i, j+1, ans);
        grid[i][j] = c;
        ans-=grid[i][j];
     //   dp[{i,j}]= ans;
        return;
    }
    
    
    
  //  map< pair<int , int> > dp;
    int minPathSum(vector<vector<int>>& grid) {
        int ans =0;
     //Backtraching code which fails for large inputs   minpath1(grid, 0, 0, ans);
      //  minpath2(grid, 0, 0, ans);
        int r = grid.size();
        int c = grid[0].size();
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(i==0 && j==0) continue;
                if(i==0 && j>0) grid[i][j]+=grid[i][j-1];
                else{
                    if(j==0 && i>0) grid[i][j]+=grid[i-1][j];
                    else grid[i][j]+=min(grid[i-1][j], grid[i][j-1]);
                }
            }
        }
        return grid[r-1][c-1];
    }
};
