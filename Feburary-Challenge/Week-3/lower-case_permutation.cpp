class Solution {
public:
    vector< string > ans;
    void recur(string S, int in){
         ans.push_back(S);
        if(in==S.length()) return;
        
        for(int i=in;i<S.length();i++){
            if(S[i]>='a' && S[i]<='z'){
                char temp = S[i];
                char x = S[i]-'a'+'A';
                S[i] = x;
                recur(S, i+1);
                S[i] = temp;
            }else{
                if(S[i]>='A' && S[i]<='Z'){
                char temp = S[i];
                char x = S[i]-'A'+'a';
                S[i] = x;
                recur(S, i+1);
                S[i] = temp;
            }
            }
        }
    }
    vector<string> letterCasePermutation(string S) {
        recur(S, 0);
        return ans;
    }
};
