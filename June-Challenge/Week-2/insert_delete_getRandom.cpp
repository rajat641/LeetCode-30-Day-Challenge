class RandomizedSet {
public:
    /** Initialize your data structure here. */
    deque< int > q;
    unordered_map< int , int > m;
    
    RandomizedSet() {
        
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        if(m[val]==0){
            q.push_back(val);
            m[val] = q.size();
            return 1;
            
        }
        return 0;
        
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        int x = m[val];
        if(x==0) return 0;
        int lastelement = q[q.size()-1];
        q[q.size()-1] = val;
        m[lastelement] = x;
        q[x-1] = lastelement;
        m.erase(val);
        q.pop_back();
        return 1;
    }
    
    /** Get a random element from the set. */
    int getRandom() {
        return q[rand()%q.size() ];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
