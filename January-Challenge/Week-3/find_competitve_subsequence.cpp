class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
        deque< int > Q;
        int num_del = nums.size()-k;
        for(auto i:nums){
            while(!Q.empty() && i<Q.back() && num_del){
                num_del--;
                Q.pop_back();
            }
            Q.push_back(i);
          //  while(Q.size()>k) Q.pop_front();
            
        }
        
        vector< int > ans(begin(Q), begin(Q)+k);
        return ans;
    }
};
