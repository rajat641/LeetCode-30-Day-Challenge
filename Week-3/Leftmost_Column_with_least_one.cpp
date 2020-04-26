/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * class BinaryMatrix {
 *   public:
 *     int get(int x, int y);
 *     vector<int> dimensions();
 * };
 */

class Solution {
public:
    bool check1(BinaryMatrix &binaryMatrix, int r, int c){
        for(int u=0;u<r;u++){
            if(binaryMatrix.get(u,c)==1) return 1;
        }
        return 0;
    }
    
    int leftMostColumnWithOne(BinaryMatrix &binaryMatrix) {
        int l = 0;
        vector< int > sz =binaryMatrix.dimensions();
        int h = sz[1]-1;
        int ans = -1;
        while(l<=h){
            int m = l+(h-l)/2;
            if(check1(binaryMatrix,sz[0], m)){
                ans = m;
                h=m-1;
            }else l=m+1;
        }
        return ans;
    }
};
