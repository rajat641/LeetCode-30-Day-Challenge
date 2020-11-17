class Solution {
public:
    int longestMountain(vector<int>& A) {
        if(A.size()<3) return 0;
        vector< int>l(A.size());
        vector< int >r(A.size());
        l[0] = 0;
        r[A.size()-1] = 0;
        for(int i=1;i<A.size();i++){
            if(A[i]>A[i-1]) l[i] = l[i-1]+1;
            else l[i]=0;
        }
         for(int i=A.size()-2;i>=0;i--){
            if(A[i]>A[i+1]) r[i] = r[i+1]+1;
            else r[i]=0;
        }
        int ans =0;
        for(int i=0;i<A.size();i++){
            if(l[i] && r[i])ans = max(ans, l[i]+r[i]+1);
        }
        return ans;
    }
};


 //1 2 3 4 5
         
