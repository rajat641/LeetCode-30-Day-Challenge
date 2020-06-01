class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int r = coordinates.size();
        if(r==0 || r==1) return 1;
        int c = 2;
        map< string, int> m;
        vector< int > prev= coordinates[0];
        for(int u=1;u<r;u++){
            vector< int > curr = coordinates[u];
            int y = curr[1] - prev[1];
            int x = curr[0] - prev[0];
            if(x==0) return 0;
            int k = __gcd(x, y);
            y/=k;
            x/=k;
            m[to_string(x)+"-"+to_string(y)]++;
        }
        if(m.size()==1) return 1;
        return 0;
    }
};
