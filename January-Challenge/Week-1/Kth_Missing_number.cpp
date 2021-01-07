class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int sz = arr.size();
        for(int i=1;i<arr[0];i++){
            k--;
            if(k==0) return i;
        }
        for(int i=1;i<sz;i++){
            int diff = arr[i]- arr[i-1]-1;
            if(k>diff) k-=diff;
            else{
                if(k>=1) return arr[i-1]+k;
            }
        }
        return arr[sz-1]+k;
    }
};
