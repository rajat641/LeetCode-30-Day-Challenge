class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector< int > ans;
        long S =0;
        unordered_map< int, int > M;
         unordered_map< int, int > cnt;
        cnt[0]=1;
        int Y =0;
        int P=1;
        for(auto &i:nums){
            Y^=i;
            cnt[i]++;
            if(cnt[i]>1){
                ans.push_back(i);
            }
            P = max(P, i);
            if(M[i]==0){ M[i]=1;S+=i;}
        }
       P = nums.size();
       ans.push_back( (P*(P+1))/2 - S);
        return ans;
    }
};
