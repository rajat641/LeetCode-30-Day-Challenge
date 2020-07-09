class Solution {
public:
    int hammingDistance(int x, int y) {
        int ans = 0;
        for(int u=0;u<32;u++){
            if(x&(1<<u) ^ (y&(1<<u))) ans++;
            
        }
        return ans;
    }
};
