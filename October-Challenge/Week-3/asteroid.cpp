class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
            int sz = asteroids.size();
            deque< int > Q;
            if(sz<2) return asteroids;
            
        int fl  =0;
        vector< int > sol;
        for(int i=0;i<sz;i++){
            if(asteroids[i]>0 || sol.empty() || sol.back()<0) sol.push_back(asteroids[i]);
            else{
                if(sol.back()<=-asteroids[i]){
                    if(sol.back()< -asteroids[i]) i--;
                    sol.pop_back();
                }
            }
        }
        return sol;
    }
};
