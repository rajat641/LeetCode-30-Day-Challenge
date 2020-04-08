class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map< string, vector<string > > m;
        int sz = strs.size();
        for(int u=0;u<sz;u++){
            string t = strs[u];
            sort(t.begin(), t.end());
            m[t].push_back(strs[u]);
        }
        vector< vector< string > >ans;
        for( map< string, vector<string > >::iterator i= m.begin();i!=m.end();i++){
            ans.push_back(i->second);
        }
        return ans;
        
        
    }
};
