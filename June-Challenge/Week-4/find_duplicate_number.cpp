class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int k = nums[0];
        for(int i=0;i<nums.size();i++){
            int k = abs(nums[i])-1;
            if(nums[k]<0) return k+1;
            nums[k] = -nums[k];
            
        }
        return k;
    }
};
