class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
      auto A = nums;
     sort(begin(A), end(A));
         int L =0;
        int R = A.size()-1;
        while(L<=R){
            if(nums[L]==A[L]){
                L++; continue;
            }
            if(nums[R]==A[R]){
                --R; continue;
            }
            return R-L+1;
        }
        return 0;
    }
};
