class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
            int sz = arrays.size();
            int mini = arrays[0][0];
            int ans =0;
            int maxi = arrays[0].back();
            for(int i=1;i<sz;i++){
                ans = max(ans, max({abs(arrays[i][0]-mini),abs(arrays[i][0]-maxi),abs(arrays[i].back()-mini),abs(arrays[i].back()-maxi)}));
                
                mini = min(mini, arrays[i][0]);
                maxi = max(maxi, arrays[i].back());
            
            }
        return ans;
    }
};
