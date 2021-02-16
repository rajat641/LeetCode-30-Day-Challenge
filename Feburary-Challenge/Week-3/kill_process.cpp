class Solution {
public:
    map< int , int > killed;
    map< int , vector< int> >parent;
    void dfs(int K){
        if(killed[K]==0){
            killed[K]=1;
            for(auto &u:parent[K]){
                if(!killed[u])dfs(u);
            }
        }
        return;
    }
    vector<int> killProcess(vector<int>& pid, vector<int>& ppid, int kill) {
        
        int c =0;
        vector< int > ans;
        for(auto &i:ppid){
            parent[i].push_back(pid[c++]);
        }
        dfs(kill);
        map< int , int > used;
        for(auto &i:ppid){
            if(i==0) continue;
            if(killed[i] && used[i]==0){
                ans.push_back(i);
                used[i]=1;
            }
        }
        for(auto &i:pid){
            if(i==0) continue;
            if(killed[i] && used[i]==0){
                ans.push_back(i);
                used[i]=1;
            }
        }
        return ans;
    }
};
