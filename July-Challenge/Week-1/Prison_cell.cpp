class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int N) {
        string s ="";
        for(auto i:cells) s+=to_string(i);
        map< string , int > m;
       // m[s ]= 0;
        unordered_map< int , string>ans;
       // ans[0] = s;
        string prev = s;
        string start = s;
        int k= 1;
        while(1){
            // change
            s="";
            
            for(int i=0;i<8;i++){
                if(i==0 || i==7) s+="0";
                else {
                    if((prev[i-1]=='1' && prev[i+1]=='1') ||(prev[i-1]=='0' && prev[i+1]=='0'))s+="1";
                    else s+="0";
                }
                
            }
             if(m.find(s)!=m.end())break;
            m[s] =  k;
            ans[k] = s;
            ++k;
            prev = s;
            
        }
        int j = m.size();
        int day;
        if(N%j==0) N=j;
        else N = N%j;
        string u = ans[N];
        vector< int > t;
        for(auto i:u) t.push_back(i-'0');
        return t;
        
    }
};
