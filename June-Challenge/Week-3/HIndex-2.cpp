class Solution {
public:
    int hIndex(vector<int>& citations) {
        
        int l =0;
        int h = citations.size()-1;
        int sz = h+1;
        int ans =0;
        while(l<=h){
            int m = l+(h-l)/2;
            if(citations[m]>=sz-m){
                h = m-1;
                ans = sz-m;
            }else l = m+1;
            
            
        }
        
        return ans;
   
    }
};
