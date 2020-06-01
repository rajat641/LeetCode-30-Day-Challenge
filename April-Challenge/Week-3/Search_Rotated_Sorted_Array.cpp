class Solution {
public:
    int pivot(vector< int >&nums){
        int l= 0;
        
        int h = nums.size()-1;
        int sz = h;
        while(l<=h){
            int m = l+(h-l)/2;
            if(m==0 && nums[m]<=nums[m+1] && nums[m]<=nums[sz]) return m;
            if(m==sz && nums[m]<=nums[m-1] && nums[m]<nums[0]) return m;
            if(m-1>=0 && nums[m]<=nums[m-1] && m+1<=sz&& nums[m]<=nums[m+1]) return m;
       //     else{
            if(nums[m]<nums[0]) h=m-1;
            else l = m+1;
         //   }
        }
        return 0;
    }
    int ser(vector< int >&nums, int l, int h, int target){
        while(l<=h){
            int m= l+(h-l)/2;
            if(nums[m]==target) return m;
            if(nums[m]<=target) l=m+1;
            else h = m-1;
        }
        return -1;
        
    }
    
    
    int search(vector<int>& nums, int target) {
        int sz = nums.size();
        if(sz==0) return -1;
        if(sz==1){
            if(nums[sz-1]==target) return 0;
            return -1;
        }
        int p =pivot(nums);
        cout<< p<<endl;
        int  k= ser(nums, 0,  p,target);
        int i = ser(nums, p, sz-1,target);
        if(k==-1 && i== -1) return -1;
        if(k==-1) return i;
        return k;
        
    }
};
