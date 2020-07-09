class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector< vector< int > > sol;
          int sz= nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0;i<sz-2;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int target = - nums[i];
             int j = i+1;
            int k = sz-1;
            while(k>j){
                if(nums[k]+nums[j]> target) --k;
                else if(nums[k]+nums[j]< target) ++j;
                else if(nums[k]+nums[j]==target){
                    sol.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                    while(j<k && nums[j]==nums[j-1]) j++;
                    while(j<k && k< nums.size()-1 && nums[k]==nums[k+1]) k--;
                    
                  
                }
            }
            
        }
       // vector< vector< int > > ans(sol.begin(), sol.end());
        return sol;
    }
};
