class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
            int sz = s.length();
           vector< string > ans;
          if(sz<=10) return ans;
        map< string , int > m;
        for(int i=0;i<=sz-10;i++){
            m[s.substr(i, 10)]++;
        }
        for(auto i:m){
            if(i.second>1) ans.push_back(i.first);
        }
        return ans;
    }
};
