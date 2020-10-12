class TwoSum {
public:
    /** Initialize your data structure here. */
    unordered_map< long long, long long >m;
    TwoSum() {
        
    }
    
    /** Add the number to an internal data structure.. */
    void add(int number) {
        m[number]++;
    }
    
    /** Find if there exists any pair of numbers which sum is equal to the value. */
    bool find(int value) {
        for(auto i:m){
            int n = (long long)i.first;
            if(m.find((long)value-n)!=m.end()){
                if(n+n==value){
                    if(m[n]>1) return 1;
                }else{
                    return  1;
                }
            }
        }
        return 0;
    }
};

/**
 * Your TwoSum object will be instantiated and called as such:
 * TwoSum* obj = new TwoSum();
 * obj->add(number);
 * bool param_2 = obj->find(value);
 */
