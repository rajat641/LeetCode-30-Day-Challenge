class Solution {
public:
    string removeDuplicateLetters(string s) {
        unordered_map< char, int > m;
        unordered_map< char, int > used;
        for(auto i:s) m[i]++;
        string ans = "";
        for(int i=0;i<s.length();i++){
            if(used[s[i]]==1){
                m[s[i]]--; continue;    
            }
            while(!ans.empty()&& s[i]<ans.back() && m[ans.back()]>0){ used[ans.back()]=0; ans.pop_back();}
            m[s[i]]--;
            used[s[i]]=1;
            ans+=s[i];
        }
        return ans;
    }
};
