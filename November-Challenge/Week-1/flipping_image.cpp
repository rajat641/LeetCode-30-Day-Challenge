class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        int r = A.size();
        for(int i=0;i<r;i++){
            reverse(begin(A[i]), end(A[i]));
            for(int j =0;j<A[i].size();j++){
                A[i][j] =( A[i][j]==1 ? 0:1);
            }
            
        }
        return A;
    }
};
