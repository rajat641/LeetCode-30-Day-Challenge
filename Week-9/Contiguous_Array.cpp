class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int l =0;
        int r =0;
        int sum =0;
        int ans =0;
        map< int ,int> m;
        m[0] = -1; // 
        int sz = nums.size();
        while(r<sz){
           if(nums[r]==0) sum--;
           else sum++;
          if(m.find(sum)!=m.end()){
              ans = max(ans, r-m[sum]);
              
          }else{
              m[sum]=r;
          }
            r++;
        }
        return ans;
    }
};
