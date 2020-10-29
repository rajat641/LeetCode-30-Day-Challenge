class Solution {
public:
    bool find132pattern(vector<int>& nums) {
           stack< int > ans;
          int maxx = INT_MIN;
          for(int i = nums.size()-1;i>=0;i--){
              while(!ans.empty() && nums[i]> ans.top()){
                  maxx = ans.top(); ans.pop();
              }
              if(nums[i]> maxx) ans.push(nums[i]);
              if(nums[i]<maxx) return 1;
          }
        return 0;
    }
};
