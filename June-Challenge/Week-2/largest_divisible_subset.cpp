class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        vector< int > dp;
        int sz=  nums.size();
        if(sz<2) return nums;
        
        sort(begin(nums), end(nums));
        vector< pair< int  , int > >pre(sz+1);
        for(int i=0;i<sz;i++) {
            pre[i] = {i, 1};
        }
        int index = 1;
        int ans = -1;
        for(int i=1;i<sz;i++){
            for(int j=0;j<i;j++){
                
                if(nums[i]%nums[j]==0){
                    if(pre[i].second<=pre[j].second+1){
                        pre[i].second = pre[j].second+1;
                        pre[i].first = j;
                    }
                    
                    
                }
                
            }
            if(ans<=pre[i].second){
                ans = pre[i].second;
                index = i;
            }
        }
        while(pre[index].second!= 1){
            dp.push_back(nums[index]);
            index = pre[index].first;
            
        }
        dp.push_back(nums[index]);
        return dp;
        
    }
};
