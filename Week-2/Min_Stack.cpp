class MinStack {
public:
    /** initialize your data structure here. */
    stack< int > s;
    stack< int > sm;
    MinStack() {
        
    }
    
    void push(int x) {
        if(s.empty()){
            s.push(x);
            sm.push(x);
        }else{
            s.push(x);
            int k = sm.top();
            sm.push(min(x, k));
        }
    }
    
    void pop() {
        s.pop();
        sm.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return sm.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
