class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(begin(intervals), end(intervals));
        int sz = intervals.size();
        int s = intervals[0][0];
        int end = intervals[0][1];
        int cnt = 0;
        for(int i=1;i<sz;i++){
            if(intervals[i][0]>=s && intervals[i][1]<=end){
                ++cnt;
            }else{
                if(intervals[i][0]<=s && intervals[i][1]>=end)++cnt;
                s = intervals[i][0];
                end = intervals[i][1];
            }
            
        }
        return sz -cnt;
    }
};
