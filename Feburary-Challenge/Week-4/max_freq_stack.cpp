class FreqStack {
public:
    map< int , stack< int > >M;
    map< int , int >dp;
    FreqStack() {
        
    }
    
    void push(int val) {
        dp[val]++;
        M[dp[val]].push(val);
    }
    
    int pop() {
        auto x = M.rbegin();
        int ans = x->second.top(); 
        dp[x->second.top()]--;
        if(dp[x->second.top()]==0) dp.erase(x->second.top());
        x->second.pop();
        if(x->second.empty()) M.erase(x->first);
        return ans;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */
