class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_map< int, int > M;
        for(auto &u:candyType) M[u]++;
        int caneat = candyType.size()/2;
        return min(caneat, (int)M.size());
    }
};
