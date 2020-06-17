class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
            int pos = -1;
            int l =0;
        int sz = nums.size();
        
            int h = sz-1;
        while(l<=h){
            int m = l+(h-l)/2;
            if(nums[m]>=target){
                pos = m;
                h=  m-1;
            }else l = m+1;
            
            
            
        }
        
        if(pos == -1) return nums.size();
        return pos;
    }
};
