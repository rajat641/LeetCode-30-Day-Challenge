class Solution {
public:
    bool canAttendMeetings(vector<vector<int>>& intervals) {
        sort(begin(intervals), end(intervals));
        int i =0;
        for(int j=1;j<intervals.size();j++){
            if(intervals[j][0]>=intervals[i][1]){
                i =j;
            }else{
                return 0;
            }
        }
        return 1;
    }
};
