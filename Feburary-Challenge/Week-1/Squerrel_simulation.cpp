class Solution {
public:
    int dis(vector< int > a, vector< int >b){
        return  abs(a[0]-b[0])+ abs(a[1]-b[1]);
    }
    int minDistance(int height, int width, vector<int>& tree, vector<int>& squirrel, vector<vector<int>>& nuts) {
        vector< int > near = {0,0};
        int ans = 0;
        int di =  INT_MAX;
        int sz = nuts.size();
        for(int i=0;i<sz;i++){
            int r = dis(nuts[i],squirrel);
            if(r<=di){
                di = r;
                near = nuts[i];
            }
        }
        for(int i=0;i<sz;i++){
                int u = dis(nuts[i],tree);
                ans+=u;
                u = dis(nuts[i], tree);
                ans+=u;
            
        }
        int fans= INT_MAX;;
        for(int i=0;i<sz;i++){
            int newdis =  ans-2*dis(nuts[i], tree)+ dis(nuts[i], tree)+ dis(nuts[i],squirrel);
            fans = min(newdis, fans);
        }
        return fans;
        
    }
};
