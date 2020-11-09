class Solution {
public:
    bool ch(vector< int >k, int val, int thres){
        int S =0;
        for(auto i:k){
            S+=(i%val!=0? ((i/val)+1): i/val);
        }
        return S<=thres;
    }
    
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l = 1;
        int ans  = -1;
        int h = 1000001;
        while(l<=h){
            int m = l+(h-l)/2;
            if(ch(nums,m, threshold)){
                h = m-1;
                ans = m;
            }else{
                l = m+1;
            }
        }
        return ans;
    }
};
