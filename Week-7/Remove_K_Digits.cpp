class Solution {
public:
    string removeKdigits(string num, int k) {
            int sz = num.length();
            if(k>=sz) return "0";
            int pos_filled = sz-k;
            int start = 0;
            int min_val = 11;
            vector< int > ans(pos_filled);
            for(int i=0;i<pos_filled;i++){
                for(int j=start;j<=(sz-pos_filled+i);j++){
                    int n = num[j]-'0';
                     if(min_val>n){
                         min_val=n;
                         start = j;
                     }
                }
                ans[i] = min_val;
                min_val = 11;
                start = start+1;
                
            }
        string an = "";
        int fl=0;
            for(auto i:ans){
            if(i==0){
                if(fl==0) continue;
            }
           // if(i!=0){
                an+=to_string(i);
                fl=1;
            //}
        }
        if(an=="") return "0";
            
            return an;
       
    }
};
