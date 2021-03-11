class Solution {
public:
    int scoreOfParentheses(string S) {
        int sz = S.length();
        stack< int > st;
        int ans =0;
        int cnt =0;
    //    st.push(0);
        for(auto &u:S){
            if(u=='('){
                st.push(0);
                cnt =0;
            }else{
                while(!st.empty() && st.top()!=0){
                    cnt+=st.top();
                    st.pop();
                }
                cnt= max(2*cnt, 1);
                st.pop();
                st.push(cnt);
                cnt =0;
            }
        }
        while(!st.empty()){
            ans+= st.top(); st.pop();
        }
        return ans;
    }
};
