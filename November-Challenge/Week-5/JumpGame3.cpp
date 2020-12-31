class Solution {
public:
    int vis[50001];
    bool canReach(vector<int>& arr, int start) {
        queue< int > Q;
        int sz = arr.size();
        Q.push(start);
        vis[start]=1;
        while(!Q.empty()){
            int P = Q.front(); Q.pop();
            if(arr[P]==0) return 1;
            if(P-arr[P]>=0 && !vis[P-arr[P]]){
                Q.push(P-arr[P]);
                vis[P-arr[P]]=1;
            }
             if(P+arr[P]<sz && !vis[P+arr[P]]){
                Q.push(P+arr[P]);
                vis[P+arr[P]]=1;
            }
            
        }
        return 0;
    }
};
