class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        vector< int > pos;
        int sz = seats.size();
        for(int  i=0;i<sz;i++){
            if(seats[i]==1) pos.push_back(i);
        }
       // cout<<pos.size();
        int ans = 0;
        for(int i=0;i<sz;i++){
            if(seats[i]==0){
                auto firstpos = lower_bound(begin(pos), end(pos), i);
                auto lastpos = lower_bound(begin(pos), end(pos), i);
                int xf = INT_MAX;
                int xe = INT_MAX;
                if(firstpos != begin(pos)){
                    --firstpos;
                    xf = *firstpos;
                }
                if(lastpos!=end(pos)){
                    xe = *lastpos;
                }
               cout<<xe<<" "<<xf<<" "<<i<<endl;
                ans = max(ans, min(abs(xe-i), abs(xf-i)));
            }
        }
        return ans;
    }
};
