class Solution {
public:
    struct node {
       char x;
        unordered_map< char, struct node * > m;
        bool isned = false;
        string word;
        
    };
     struct node * head= NULL;
    void create(string x){
        struct node * temp = head;
        int sz = x.length();
        for(int i=0;i<sz;i++){
            if(temp->m.find(x[i])!=temp->m.end()) temp = temp->m[x[i]];
            else{
                struct node * d = new struct node();
                d->x = x[i];
                temp->m[x[i]] = d;
                temp = d;
            }
        }
        temp->isned = true;
        temp->word= x;
        
        
    }
    
    void recur(int i, int j, struct node* h , vector<string> &sol, vector<vector<char>>& board){
        if(i<0 || i>=board.size() || j<0 || j>=board[0].size() || board[i][j]=='*') return;
        if(h->m.find(board[i][j])!=h->m.end()){
            h = h->m[board[i][j]];
            if(h->isned){
                sol.push_back(h->word);
                h->isned = false;
            }
            
        }else return;
        char x = board[i][j];
        board[i][j]= '*';
        recur(i-1, j, h, sol, board);
        recur(i+1, j, h, sol, board);
        recur(i, j+1, h, sol, board);
        recur(i, j-1, h, sol, board);
        board[i][j] =x;
        
    }
    
    
    
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
            
            vector< string > sol;
            int r = board.size();
            if(r==0) return sol;
            int c = board[0].size();
            head = new struct node();
            // create a trie here
            for(auto x:words){
                create(x);
            }
        
            
            for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
                    struct node * t = head;
                    recur(i, j, t, sol, board);
                    
                }
            }
        return sol;
    }
};
