class Solution {
    // [1,1,2,3,3,4,4,8,8]
public:
    bool ch(vector< int >&nums, int m){
        int sz = nums.size();
        if(m==0 && nums[m]!=nums[m+1]) return 1;
        if(m==sz-1 && nums[m]!=nums[m-1]) return 1;
        if(nums[m]!=nums[m-1] && nums[m]!=nums[m+1]) return 1;
        return 0;
    }
    
    int singleNonDuplicate(vector<int>& nums) {
        
        int sz = nums.size();
        if(sz==1) return nums[sz-1];
        int  l= 0;
        int h = sz-1;
        int ans = nums[0];
        while(l<=h){
            int m = l+(h-l)/2;
            // put condition that m is a unique number
            if(ch(nums, m)) return nums[m];
            if(m%2==1){
                if(nums[m]==nums[m-1]) l=m+1;
                else h = m-1;
            }else{
                if(nums[m]==nums[m+1]) l= m+1;
                else  h= m-1;
            }
            
        }
       
        
        return nums[l];
    }
};
