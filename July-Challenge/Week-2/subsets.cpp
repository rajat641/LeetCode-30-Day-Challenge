class Solution {
public:
    vector<vector<int>> ans;
    void recur(vector< int >nums, int in , vector< int > temp){
        if(in>nums.size()) return ;
        ans.push_back(temp);
        for(int i=in;i<nums.size();i++){
            temp.push_back(nums[i]);
            recur(nums, i+1, temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector< int >temp;
        recur(nums, 0, temp);
        return ans;
    }
};
