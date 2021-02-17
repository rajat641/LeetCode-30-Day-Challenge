class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0;
        int l = 0;
        int h = height.size()-1;
        while(l<=h){
             ans = max(ans, (min(height[l],height[h])*(h-l)));
            if(height[l]<height[h])l++;
            else --h;
        }
        return ans;
    }
};
