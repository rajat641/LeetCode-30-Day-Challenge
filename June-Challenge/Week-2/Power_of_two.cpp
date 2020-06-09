class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return 0;
        long long t = n;
        return !(t&(t-1));
    }
};
