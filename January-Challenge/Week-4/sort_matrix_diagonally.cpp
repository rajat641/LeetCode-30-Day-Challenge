class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int r = mat.size();
        int c = mat[0].size();
        for(int i=c-1;i>=0;i--){
            int sr =0 , sc = i;
            vector< int > temp;
            while(sr<r && sc< c){
                temp.push_back(mat[sr++][sc++]);
            }
            sort(begin(temp), end(temp));
            sr =0, sc = i;
            int k=0;
            while(sr < r && sc< c){
                mat[sr++][sc++] = temp[k++];
            }
        }
        for(int i=1;i<r;i++){
             int sr = i, sc = 0;
            vector< int > temp;
            while(sr<r && sc< c){
                temp.push_back(mat[sr++][sc++]);
            }
            sort(begin(temp), end(temp));
            sr =i, sc = 0;
            int k=0;
            while(sr < r && sc< c){
                mat[sr++][sc++] = temp[k++];
            }
        }
        return mat;
    }
};
