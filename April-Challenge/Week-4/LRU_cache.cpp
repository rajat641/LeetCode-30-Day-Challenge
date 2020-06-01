class LRUCache {
public:
    list< int > q;
    map< int , int > v;
    map< int , list< int > ::iterator > m;
    int cap;
    LRUCache(int capacity) {
        cap = capacity;
    }
    
    int get(int key) {
        if(v.find(key)==v.end()) return -1;
        auto j = m[key]; // takes it iterator
        q.erase(j); // delete it
        q.push_front(key);
        m[key] = q.begin(); // updates it
        return v[key];
        
    }
    
    void put(int key, int value) {
        if(q.size()>=cap){
            if(v.find(key)==v.end()){
                 auto j = (q.back());
                //--j;
                //cout << *j;
                q.pop_back();
                v.erase(j);
                m.erase(j);
                v[key] = value;
                q.push_front(key);
                m[key] = q.begin();
            }else{
                v[key] = value; // update
                auto j = m[key]; // change recenct
            //    q.push_front(key);
                q.erase(j);
                q.push_front(key);
                m[key] = q.begin();
            }
            
        }else{
            //discard here
            // not found so we insert it
            if(v.find(key)==v.end()){
                v[key] = value;
                q.push_front(key);
                m[key] = q.begin();
            }else{
                v[key] = value; // update
                
                auto j = m[key]; // change recenct
                q.erase(j);
                q.push_front(key);
                m[key] = q.begin();
            }
        }    
 
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
