class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
            map< int, int > m;
            for(auto i:nums) m[i]++;
            int cnt =0;
            if(k==0){
                for(auto i:m){
                    if(i.second>1)++cnt;
                }
            return cnt;            
            }
    
    //    map< int , int >mm;
            for(auto j:m){
                if(m.find(j.first-k)!=m.end()) ++cnt;
                m[j.first]++;
              //  cout<<j.first<<" ";
            }
            return cnt;
    }
};
