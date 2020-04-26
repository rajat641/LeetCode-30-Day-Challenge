class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {
        if(s=="") return s;
        for(auto x:shift){
            int dir = x[0];
            int by = x[1]%(s.length());
            if(dir==1){
                string p =s.substr(s.length()-by);
                string p1 =s.substr(0,s.length()-by);
                s= p+p1; 
            }else{
           //     int mv= min(by,s.length());
                string p =s.substr(0,by);
                string p1 =s.substr(by);
                s= p1+p;
               // cout<<s<<endl;
            }
        }
        return s;
    }
};
