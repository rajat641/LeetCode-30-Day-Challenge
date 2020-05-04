class Solution {
public:
    bool canJump(vector<int>& nums) {
        int last =0;
        int jumps =0;
        int sz = nums.size();
        if(sz==0) return 0;
        if(sz==1 )return sz;
        int curr_ladder =0;
        for(int u=0;u<sz;u++){
            curr_ladder= max(curr_ladder, u+nums[u]);
            if(u==last){
                last = curr_ladder;
                if(curr_ladder>=sz-1){cout<< jumps; return 1;}
                jumps++;
            }
        }
        cout<< jumps;
        return 0;
        
        
    }
};
