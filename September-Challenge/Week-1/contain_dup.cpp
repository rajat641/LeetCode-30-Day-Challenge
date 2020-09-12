class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
          int sz = nums.size();
            set< long> ss;
        int left =0;
         for(int i=0;i<sz;i++){
             if(i>k) ss.erase(nums[left++]);
             auto c = ss.lower_bound((long long)nums[i]-t);
             if(c!=ss.end()  && abs(*c - nums[i])<=t) return 1;
             ss.insert(nums[i]);
         }
        
        return 0;
    }
};
