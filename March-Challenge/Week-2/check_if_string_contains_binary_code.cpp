class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int ans = (1<<k);
        set< string >st;
        int sz = s.length();
        for(int i=0;i<=sz-k;i++){
            auto T =s.substr(i, k);
            if(st.find(T)==st.end()){
                --ans;
                st.insert(T);
                if(ans==0) return 1;
            }
        }
        return 0;
    }
};
