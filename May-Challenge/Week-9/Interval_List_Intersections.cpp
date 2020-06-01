class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
      //  sort(A.begin(), A.end());
       // sort(B.begin(), B.end()); 
       // vector< int >temp;
        vector< vector< int > > ans;
        int i =0;
        int j=0;
        int sz1 = A.size();
        int sz2 = B.size();
        if(sz1==0 && sz2 ==0) return ans;
        while(i<sz1 && j<sz2){
                if(B[j][0] > A[i][1]){
                    i++; continue;
                }
                if(A[i][0]> B[j][1]){
                    j++; continue;
                }
            int start = max(A[i][0], B[j][0]);
            int end = min(A[i][1], B[j][1]);
            ans.push_back({start, end});
            if(A[i][0]<B[j][0]){
                if(A[i][1]> B[j][1]) j++;
                else i++;
            }
            else{
                if(A[i][1]< B[j][1]) i++;
                else j++;
            }
            
            
        }
        
        return ans;
    }
};
