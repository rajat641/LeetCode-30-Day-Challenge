class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue< int ,vector< int > >q;
        for(auto i:stones) q.push(i);
        int ans =0;
        if(stones.size()==1) return stones[0];
        while(q.size()!=1){
            int t1=  q.top();
            q.pop();
            if(q.size()==0) return t1;
            int t2 = q.top();
            q.pop();
           // if(t1!=t2){
                q.push(abs(t1-t2));
           // }
        }
        ans = q.top();
        return ans;
    }
};
