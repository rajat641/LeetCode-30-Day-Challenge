class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
            map< long , vector< vector< int > > >m;
            for(auto i:points){
                int dis = i[0]*i[0] + i[1]*i[1];
                m[dis].push_back(i);
            }
            vector< vector< int > >sol;
            for(auto i=m.begin();i!=m.end();i++){
                 for(auto j:i->second){
                     sol.push_back(j);
                     --K;
                     if(K==0){
                         return sol;
                     }
                 }
            }
            return sol;
    }
};
