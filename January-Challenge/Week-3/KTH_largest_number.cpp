class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue< int, vector< int > , greater<> > pq;
        int sz = nums.size();
        for(int i=0;i<sz;i++){
             pq.push(nums[i]);
          //  cout<< pq.top()<<endl;
            if(i>=(k)) pq.pop();
           
        }
        return pq.top();
    }
};
