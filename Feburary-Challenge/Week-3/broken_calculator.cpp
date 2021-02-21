class Solution {
public:
    int brokenCalc(int X, int Y) {
        int cnt =0;
        while(Y>X){
            if(Y%2==1){
                Y++;
                cnt+=2;
                Y/=2;
                
            }else{
                Y/=2;;
                cnt++;
            }
        }
        if(X>=Y) return cnt+X-Y;
        return cnt;
        
    }
};
