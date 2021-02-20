class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {
        
        int sz = A.size();
        if(sz<3) return 0;
        vector< int > dp(sz+1, 0);
        long long ans =0;
        int cnt = 0;
        
        for(int i=2;i<sz;i++){
            if(A[i]-A[i-1]== A[i-1]-A[i-2]){
                ++cnt;
            }else cnt=0;
            ans+=cnt;
        }
        return ans;
        
    }
};

/*
 1 2 3 4 5 6
 
 1 2 3
 2 3 4
 3 4 5
 4 5 6
 
 1 2 3 4
 2 3 4 5
 3 4 5 6
 
 1 2 3 4 5
 2 3 4 5 6
 
 1 2 3 4 5 6
 
 
*/
