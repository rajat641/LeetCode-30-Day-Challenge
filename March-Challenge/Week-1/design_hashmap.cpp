class MyHashMap {
public:
    /** Initialize your data structure here. */
    struct node {
        int val;  
        int key;
    };
    vector< vector< struct node * > >M;
    MyHashMap() {
        M.resize(9973);
    }
    
    /** value will always be non-negative. */
    void put(int key, int value) {
        int pos = (key+9973)%9973;
        if(M[pos].empty()){
            struct node *H = new struct node();
            H->key = key;
            H->val = value;
            M[pos].push_back(H);
            
        }else{
            for(auto &u:M[pos]){
                if(u->key == key){
                    u->val = value;
                    return;
                }
            }
            struct node *H = new struct node();
            H->key = key;
            H->val = value;
            M[pos].push_back(H);
            
        }
    }
    
    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    int get(int key) {
       int pos = (key+9973)%9973;
       
        for(auto u:M[pos]){
            if(u->key == key){
                return u->val;
            }
        }
            
        return -1;
    }
    
    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    void remove(int key) {
        int pos = (key+9973)%9973;
        
        for(int i=0;i<M[pos].size();i++){
            if(M[pos][i]->key == key){
                M[pos].erase( begin(M[pos])+i);
                return;
            }
            
        }
        
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
