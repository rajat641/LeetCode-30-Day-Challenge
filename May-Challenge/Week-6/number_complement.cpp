class Solution {
public:
    int findComplement(int num) {
        int ans =0;
        int bits_req = int(log(num)/log(2)) +1;
        for(int u=0;u<bits_req;u++){
            ans+=((num&(1<<u))?0:(1<<u));
        }
        return ans;
    }
};
