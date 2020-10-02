class Solution {
public:
    vector< vector< int > > sol;
    
    void recur(vector< int >&target, int S , int in, vector< int> temp){
        if(S<=0){
            if(S==0){
                sol.push_back(temp);
            }
            return;
        }
        for(int i = in;i<target.size();i++){
            S-=target[i];
            temp.push_back(target[i]);
            recur(target, S, i, temp);
            S+=target[i];
            temp.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector< int> temp;
        recur(candidates, target, 0, temp);
        return sol;
    }
};
