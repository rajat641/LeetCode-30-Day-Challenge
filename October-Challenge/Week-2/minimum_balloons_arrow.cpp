class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
            sort(begin(points), end(points));
            int sz = points.size();
           if(sz==0) return 0;
           int ans = 1;
          int en = points[0][1];
          for(int i=0;i<sz;i++){
              if(points[i][0]>en){
                  ++ans;
                  en = points[i][1];
              }else{
                  en  = min(en, points[i][1]);
                  
              }
          }
        return ans;
    }
};
