class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int sz = nums.size();
        int first = 0;
        int last = 0;
        vector< string > ans;
        if(sz==0) return ans;
        nums.push_back(nums.back());
        
        for(int i=1;i<=sz;i++){
            if(nums[i]-1==nums[i-1]){
                last =i;
            }else{
               
                if(last == first){
                    ans.push_back(to_string(nums[last]));
                }else{
                    ans.push_back(to_string(nums[first])+"->"+to_string(nums[last]));
                }
                last = i;
                first =i;
            }
            
        }
        
        return ans;
    }
};
// 1 3 4 5 6 8
