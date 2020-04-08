class Solution {
public:
    int sum (int x){
        if(x==0) return 0;
        int sum1 =0;
        while(x!=0){
            int u = x%10;
            sum1 += u*u;
            x/=10;
            
            
        }
        return sum1;
        
    }
    map< int , int > c ;
    bool isHappy(int n) {
        while(1){
            int  p= sum(n);
            if(p==1) return true;
            c[p]++;
            n = p;
            if(c[p]>1) break;
            
            
        }
        
        return false;
    }
};
