class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
            sort(begin(intervals), end(intervals));
        vector< vector< int > > sol;
         if(intervals.empty() || intervals.size()==1) return intervals;
        int start = intervals[0][0];
        int end = intervals[0][1];
        for(int i=1;i<intervals.size();i+=1){
            if(intervals[i][0]<=end){
                end = max(end,intervals[i][1]);
            }else{
                sol.push_back({start, end});
                start = intervals[i][0];
                end = intervals[i][1];
            }
            
        }
        sol.push_back({start,end});
        return sol;
    
    }
};
