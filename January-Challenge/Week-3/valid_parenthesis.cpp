class Solution {
public:
    bool isValid(string s) {
        stack< char > st;
        for(auto i:s){
            
            if(st.empty() ) st.push(i);
            else{
                if(i=='(' || i=='[' || i=='{') st.push(i);
                else{
                    if((i==')' && st.top()=='(') || (i=='}' && st.top()=='{')|| (i==']' && st.top()=='[')) st.pop();
                    else return 0;
                }
            }
        }
        return st.empty();
    }
};
