class Solution {
public:
    string frequencySort(string s) {
        map< char, int >m;
        for(auto i:s) m[i]++;
        map< int , vector< char > >mm;
        for(auto i=m.begin();i!=m.end();i++){
            mm[i->second].push_back(i->first);
        }
        string ans = "";
        for(auto i=mm.rbegin();i!=mm.rend();i++){
            for(auto j:i->second){
                for(int l=0;l<i->first;l++) ans+=j;
            }
        }
        return ans;
    }
};
