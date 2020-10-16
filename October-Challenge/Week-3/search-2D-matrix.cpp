class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size();
        if(r==0) return 0;
        int c = matrix[0].size();
        pair< int , int > pos = {0, c-1};
        while(1){
            if(pos.first>=r || pos.second<0 ) return 0;
            if(matrix[pos.first][pos.second]==target) return 1;
            if(target>matrix[pos.first][pos.second]){
                pos.first++;
            }else{
                pos.second--;
            }
        }
        return 0;
    }
};
