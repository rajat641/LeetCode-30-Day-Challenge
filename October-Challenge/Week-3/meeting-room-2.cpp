class Solution {
public:
    struct comp{
        bool operator()(vector< int > a, vector< int > b){
            return a[1] > b[1];   
        }  
    };
    int minMeetingRooms(vector<vector<int>>& intervals) {
            int sz = intervals.size();
            sort(begin(intervals), end(intervals));
            priority_queue< vector< int > , vector< vector< int > >, comp >pq;
           int ans = 0;
            for(int i=0;i<sz;i++){
               while(!pq.empty() && pq.top()[1]<=intervals[i][0]) pq.pop();
              pq.push(intervals[i]);
                ans = max(ans, (int)pq.size());
           }
        return ans;
    }
};
