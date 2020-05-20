class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1==s2) return 1;
        int sz1 = s1.length();
        int sz2 = s2.length();
        if(sz1 > sz2) return 0;
        map< char, int > m;
        for(auto i:s1) m[i]++;
        map< char, int > temp;
        for(int i=0;i<sz1;i++){
            temp[s2[i]]++;
        }
        int s = 0;
        int en = sz1-1;
        while(en<sz2){
            if(m==temp) return 1;
            temp[s2[s]]--;
            if(temp[s2[s]]<=0){
                temp.erase(s2[s]);
            }
            s++;
           // m[s2[s]]++;
            temp[s2[++en]]++;
            
        }
        return m==temp;
            
    }
};
