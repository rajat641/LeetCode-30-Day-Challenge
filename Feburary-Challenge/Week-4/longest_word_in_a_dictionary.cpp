class Solution {
public:
    struct comp{
        bool operator()(string a, string b){
            if(a.length()==b.length()) return a<b;
            return a.length()>b.length();
        }  
    };
    bool ch(string x, string S){
        int i=0, j =0;
        while(i<x.length() && j<S.length()){
            if(x[i]==S[j]){
                i++;
            }
            j++;
        }
        return i==x.length();
    }
    string findLongestWord(string s, vector<string>& d) {
        sort(begin(d), end(d), comp());
        for(auto &i:d){
            if(ch(i,s)) return i;
        }
        return "";
    }
};
