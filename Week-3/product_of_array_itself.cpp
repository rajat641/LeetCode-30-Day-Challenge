class Solution {
public:
    
    vector<int> productExceptSelf(vector<int>& nums) {
          int sz = nums.size();
        vector< int > left(sz);
        left[0]=1;
          for(int u=1;u<sz;u++){
              left[u]= left[u-1]*nums[u-1];
              
          }
        vector< int > right(sz);
        int R=1;
        for(int u=sz-1;u>=0;u--){
            left[u]*=R;
             R*=nums[u];
        }
        return left;
        
    }
};
