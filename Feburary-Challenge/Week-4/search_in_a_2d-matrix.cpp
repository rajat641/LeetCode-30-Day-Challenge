class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int L =matrix[0].size()-1, R=0;
        while(L>=0 && R<matrix.size()){
            if(matrix[R][L]==target) return 1;
            if(target>matrix[R][L]) R++;
            else L--;
        }
        return 0;
    }
};
