class Solution {
public:
    int arrangeCoins(int n) {
        if(n==0) return 0;
        if(n<=2) return 1;
        int left = 1;
        int right =n ;
        int ans = 1;
        while(left<=right){
            long long m = left+(right-left)/2;
            if((m*(m+1)/2) > n) {
                right = m-1;
                
            }else{
                ans = m;
                left= m+1;
            }
            
        }
        
        
        return ans;
    }
};
