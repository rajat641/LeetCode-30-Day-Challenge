class Solution {
public:
    int bitwiseComplement(int N) {
        if(N==0) return 1;
        int ans = 0;
        int u = int(log(N)/log(2))+1;
        //cout<<u<<endl;
        for(int i=0;i<u;i++){
            if(!(N&(1<<i))){
                ans+=(1<<i);
            }
        }
        return ans;
    }
};
