class Solution {
public:
    int recur(deque< int> &a){
        int sz = a.size();
        vector< int > dp(sz+1, 0);
        dp[0] = a[0];
        dp[1] = max(a[0], a[1]);
        for(int i=2;i<sz;i++){
            dp[i] = max(dp[i-1], a[i]+dp[i-2]);
        }
        return dp[sz-1];
    }
    int rob(vector<int>& nums) {
        int sz = nums.size();
        if(sz==0) return 0;
        if(sz==1) return nums[0];
        if(sz==2) return max(nums[0], nums[1]);
         deque< int >a(begin(nums), end(nums));
        a.pop_back();
        deque< int >b(begin(nums), end(nums));
        b.pop_front();
        return max(recur(a), recur(b));
    }
};
