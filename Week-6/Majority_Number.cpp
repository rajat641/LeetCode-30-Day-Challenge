class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int sz = nums.size();
        int c = 0;
        int temp;
        if(sz==1) return nums[sz-1];
        for(int u=0;u<sz;u++){
            if(u==0){
                temp= nums[u];
                c++;
            }else{
                if(nums[u]==temp) c++;
                else{
                    if(c>0){
                        c--; continue;
                    }
                    temp=nums[u];
                    c++;
                }
            }
        }
        return temp;
    }
};
