class Solution {
public:
     unordered_map< string,   priority_queue< string,vector< string >, greater<> >> gr;
    void dfs(string start , deque< string >&sol){
        while(!gr[start].empty()){
            string s =gr[start].top(); gr[start].pop();
            dfs(s, sol);
        }
        sol.push_front(start);
           
    }
   
    
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        priority_queue< string,vector< string >, greater<> >q;
       
        for(auto i:tickets){
            gr[i[0]].push(i[1]);
            
            
        }
        deque< string > sol;
        string start = "JFK";
      //  deque.push_back(start);
        dfs(start, sol);
      //  sol.push_front(start);
        vector< string > ans;
        int sz = sol.size();
        for(int i=0;i<sz;i++) ans.push_back(sol[i]);
        return ans;
    }
};
