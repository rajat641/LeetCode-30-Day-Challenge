class Solution {
public:
    int dotp(vector< int >p1,vector< int >p2 ){
            return (p1[0]-p2[0])*(p1[0]-p2[0])+ (p1[1]-p2[1])*(p1[1]-p2[1]);
        
    }
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
           unordered_set< int > ss;
         ss.insert(dotp(p1,p2));
        ss.insert(dotp(p1,p3));
        ss.insert(dotp(p1,p4));
        ss.insert(dotp(p2,p3));
         ss.insert(dotp(p2,p4));
         ss.insert(dotp(p3,p4));
        return ss.find(0)==ss.end() && ss.size()==2;
        
    }
};
