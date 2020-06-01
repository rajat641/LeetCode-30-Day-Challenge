class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
            vector< vector< int > >ans ;
            ans = image;
            int r = ans.size();
            if(r==0) return ans;
            int c = ans[0].size();
            vector< vector< int > >vis(r, vector<int >(c, 0));
            queue< pair< int , int > > q;
            q.push({sr,sc});
            while(!q.empty()){
                pair< int , int > s = q.front();
                q.pop();
                ans[s.first][s.second]= newColor;
                vis[s.first][s.second]=1;
                int x = s.first;
                int y = s.second;
                if(x-1>=0 && vis[x-1][y]==0 && image[x-1][y]== image[x][y]){
                    q.push({x-1, y});
                    
                }if(x+1<r && vis[x+1][y]==0 && image[x+1][y]== image[x][y]){
                    q.push({x+1, y});
                }
                if(y-1>=0 && vis[x][y-1]==0 && image[x][y-1]== image[x][y]){
                    q.push({x, y-1});
                    
                }if(y+1<c && vis[x][y+1]==0 && image[x][y+1]== image[x][y]){
                    q.push({x, y+1});
                }
                
            }
            return ans;
        
    }
};
