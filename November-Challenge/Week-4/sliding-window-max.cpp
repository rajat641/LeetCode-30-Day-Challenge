class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        multiset<int>ss;
        vector< int > sol;
        for(int i=0;i<k-1;i++){
            ss.insert(nums[i]);
        }
        int l =0, t =nums.size();
        for(int i=k-1;i<t;i++){ 
            ss.insert(nums[i]);
            sol.push_back(*ss.rbegin());
            ss.erase(ss.find(nums[l]));
            l++;
           
        }
        return sol;
    }
};
