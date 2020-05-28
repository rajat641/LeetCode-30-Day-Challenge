class Solution {
public:
    bool ans = 1;
    
    bool dfs(vector< vector< int > >&gr, vector< int>&vis, int col, int s){
         if(gr[s].empty()) return 1;
        
        for(auto i:gr[s]){
            
            if(vis[i]!=col && vis[i]!=0) continue;
            if(vis[i] == col) return 0; // same color as parent 
            
            vis[i] = col==1 ? -1:1; // finding the next color
            if(!dfs(gr, vis, vis[i], i)) return 0; // if we find same color, then we break
            
            
        }
        return 1;
        
        
    }
    
    
    bool possibleBipartition(int N, vector<vector<int>>& dislikes) {
        vector< int > vis(N+1, 0);
        vector< vector< int > >gr(N+1);
        for(auto i:dislikes){   
            gr[i[0]].push_back(i[1]);
           gr[i[1]].push_back(i[0]);
        }
        
        for(int i=1;i<=N;i++){
            if(vis[i]==0){
                vis[i]=1;
                if(!dfs(gr, vis, vis[i], i)) return 0;
                
                
            }
        }
        return 1;
    }
        
        
        
    
};
