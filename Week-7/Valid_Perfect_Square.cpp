iclass Solution {
public:
    bool isPerfectSquare(int num) {
        vector< int > v;
        for(long i=0;i*i<=num;i++){
            if(i*i==num) return 1;
        }
       
        return 0;
    }
};
