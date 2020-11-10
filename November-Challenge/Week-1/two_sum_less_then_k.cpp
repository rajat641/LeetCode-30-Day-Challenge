class Solution {
public:
    int twoSumLessThanK(vector<int>& A, int K) {
            sort(begin(A), end(A));
            int j = A.size()-1;
           int i =0;
        int ans = -1;
        while(i<j){
            int S =A[i]+ A[j];
            if(S<K){
                ans = max(ans, S);
                i++;
            }else{
                j--;
            }
            
        }
        return ans;
    }
};
