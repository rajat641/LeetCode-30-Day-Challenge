class Solution {
public:
    bool chl(int i, int j,vector<vector<int>>& board){
        vector< int > r1 ={-1, 0, 1};
         int r = board.size();
        int c = board[0].size();
        int zero =0, one =0;
        for(auto x:r1){
            for(auto y:r1){
                if(x==0 && y==0) continue;
                int newx = x+i;
                int newy = y+j;
                if(newx>=0 && newx<r && newy>=0 && newy<c){
                    if(board[newx][newy]==0) ++zero;
                    else one++;
                }
                
            }
        }
        if(one<2 || one>3) return 1;
        return 0;
    }
    bool chz(int i, int j,vector<vector<int>>& board){
        vector< int > r1 ={-1, 0, 1};
         int r = board.size();
        int c = board[0].size();
        int zero =0, one =0;
        for(auto x:r1){
            for(auto y:r1){
                 if(x==0 && y==0) continue;
               // int newx = x+i;
                int newx = x+i;
                int newy = y+j;
                if(newx>=0 && newx<r && newy>=0 && newy<c){
                    if(board[newx][newy]==0) ++zero;
                    else one++;
                }
                
            }
        }
        if(one==3) return 1;
        return 0;
    }
    
    void gameOfLife(vector<vector<int>>& board) {
        int r = board.size();
        int c = board[0].size();
        vector< vector< int > > ans(r, vector< int >(c, 0));
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(board[i][j]==0){
                    if(chz(i, j, board)) ans[i][j]=1;
                    
                    
                }else{
                    ans[i][j]=1;
                    if(chl(i, j, board)) ans[i][j]=0; 
                }
                
            }
        }
        board = ans;
    }
};
