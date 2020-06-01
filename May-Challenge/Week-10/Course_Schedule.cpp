class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int sz =    numCourses;
        vector< int >in(sz, 0);
        vector< vector< int > >gr(sz);
        for(auto i:prerequisites){
            in[i[1]]++;
            gr[i[0]].push_back(i[1]);
        }
        queue< int > q;
        for(int i=0;i<sz;i++){
            if(!in[i])q.push(i);
        }
        while(!q.empty()){
            int x = q.front();
            q.pop();
            for(auto i:gr[x]){
                in[i]--;
                if(in[i]==0) q.push(i);
            }
            
        }
        for(int i=0;i<sz;i++){
            if(in[i]>0) return 0;
        }
        return 1;
    }
};
