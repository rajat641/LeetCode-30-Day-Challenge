class Solution {
public:
    int bitc(int x){
        int ans =0;
        while(x!=0){
            ans+=1;
            x/=2;
        }
        return ans;
    }
    
    
    int rangeBitwiseAnd(int m, int n) {
        if(m==n) return n;
        
        int t = bitc(m);
        int h = bitc(n);
        int i=0;
        while(m!=n){
            m>>=1;
            n>>=1;
            i++;
        }
        return m<<i;

    }
};
