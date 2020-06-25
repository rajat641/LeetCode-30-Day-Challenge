class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
     
            int r = dungeon.size();
            if(r==0) return 0;
            int c =dungeon[0].size();
            vector< vector< int > > dp(r+2, vector< int >(c+2, INT_MAX));
            dp[0][0] = dungeon[0][0];
            for(int i=r-1;i>=0;i--){
                for(int j=c-1;j>=0;j--){
                  if(i==r-1 && j== c-1){
                      dp[i][j] = dungeon[i][j]<0 ? abs(dungeon[i][j])+1 :1;
                  }else{
                      dp[i][j] = max(1, min(dp[i+1][j], dp[i][j+1]) - dungeon[i][j]);
                           
                  }

                    
                }
            }
        return dp[0][0];
        
    }
};
