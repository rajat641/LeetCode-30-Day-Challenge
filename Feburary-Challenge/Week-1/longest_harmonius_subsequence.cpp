class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map< int , int > m;
        int sz = nums.size();
        int ans = 0;
        for(int i=0;i<sz;i++){
            m[nums[i]]++;
            if(m.find(nums[i]-1)!=m.end()) ans = max(ans, m[nums[i]-1]+m[nums[i]]);
            if(m.find(nums[i]+1)!=m.end()) ans = max(ans, m[nums[i]+1]+m[nums[i]]);
        }
        return ans;
    }
};
