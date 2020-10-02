class RecentCounter {
public:
    deque< int > Q;
    RecentCounter() {
        
    }
    
    int ping(int t) {
        while(!Q.empty() && t-Q.front()>3000) Q.pop_front();
        Q.push_back(t);
        return (int)Q.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
