class Solution {
public:
    void rotate(vector<int>& nums, int k) {
            int sz = nums.size();
           k%=sz;
          if(k>0){
              deque< int > q(begin(nums), end(nums));
              for(int i=0;i<k;i++){
                  q.push_front(nums[sz-i-1]);
                 q.pop_back();
              }
              nums.clear();
              for(auto i:q) nums.push_back(i);
              
              
          }
    }
};
