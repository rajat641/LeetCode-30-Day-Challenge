class Solution {
public:
    int recur(int val, vector< int > A, vector< int > B){
            int sz = A.size();
          int cnt =0;
           for(int i=0;i<sz;i++){
               
               if(A[i]!=val){
                   if(B[i]==val)++cnt;
                   else return INT_MAX;
               }
           }
        return cnt;
        
        
    }
    
    int minDominoRotations(vector<int>& A, vector<int>& B) {
        int sz = A.size();
        if(sz==0) return 0;
        int ans = INT_MAX;
        ans = min(ans, recur(A[0], A,B));
        ans = min(ans, recur(A[0], B,A));
        ans = min(ans, recur(B[0], A,B));
        ans = min(ans, recur(B[0], B,A));
        return ans == INT_MAX ? -1:ans;
        
    }
};
