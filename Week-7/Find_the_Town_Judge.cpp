class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        if(trust.size()==0){
         if(N==1) return 1;   
        return -1;
        }
        
        unordered_map< int , vector< int>  > m;
        unordered_map< int , int >trust1;
        for(auto i:trust){
            m[i[1]].push_back(i[0]);
            trust1[i[0]]=1;
        }
        for(auto i=m.begin();i!=m.end();i++){
            if(i->second.size()==N-1 && trust1[i->first]==0) return i->first;
        }
        return -1;
    }
};
