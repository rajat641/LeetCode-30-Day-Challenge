class Solution {
public:
    void dfs(vector<vector<char>>& board, int i, int j, int r, int c){
        if(i<0 || i>=r || j<0 || j>=c|| board[i][j]=='X' || board[i][j]=='D') return ;
        board[i][j] = 'D';
        dfs(board, i+1, j, r,c);
        dfs(board, i-1, j, r,c);
        dfs(board, i, j+1, r,c);
        dfs(board, i, j-1, r,c);
        
    }

    void reset(vector<vector<char>>& board){
           int r = board.size();
            if(r==0) return;
                int c = board[0].size();
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(board[i][j]=='D') board[i][j]= 'O';
            }
        }
        
    }
    
    void solve(vector<vector<char>>& board) {
                    int r = board.size();
        if(r==0) return;
                int c = board[0].size();
                for(int i=0;i<r;i++){
                    for(int j=0;j<c;j++){
                        if(i==0 || i== r-1 || j==0 || j==c-1){
                            if(board[i][j]=='O'){
                                dfs(board, i, j,r,c);
                            }
                            
                        }
                        
                    }
                }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(board[i][j]=='O') board[i][j]= 'X';
                
                }
        }
            
        
                
        reset(board);
    }
};
