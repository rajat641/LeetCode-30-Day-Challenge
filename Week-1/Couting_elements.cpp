class Solution {
public:
    int countElements(vector<int>& arr) {
        map< int , int > m;
        for(auto i:arr) m[i]++;
        int ans =0;
        for(map<int , int > ::iterator i=m.begin();i!=m.end();i++){
            map<int , int > ::iterator j= i;
            j++;
            if(j==m.end()) break;
            if(i->first +1 == j->first){
                ans += (i->second);
            }
            
        }
        return ans;
    }
};
