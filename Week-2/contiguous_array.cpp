class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int sz =  nums.size();
        int l=0;
        int r = 0;
        int one=0;
        int zero=0;
        int ans =0;
       map< int , int > m;
        m[0]= 0;
        while(r<sz){
            if(nums[r]==1) one++;
            else one--;
            if(m.find(one)==m.end()) m[one]=r+1;
            else{
                ans = max(ans, r-m[one]+1);
            }
            r++;
        }
        return ans;
    }
};
