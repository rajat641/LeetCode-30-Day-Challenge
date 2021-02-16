class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        map< int , vector< int > >m;
        vector< int > ans;
        for(int i=0;i<mat.size();i++){
            int cnt =0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1)++cnt;
            }
            m[cnt].push_back(i);
        }
        for(auto &i:m){
            for(auto &j:i.second){
                if(ans.size()==k) return ans;
                ans.push_back(j);
            }
        }
        return ans;
    }
};
