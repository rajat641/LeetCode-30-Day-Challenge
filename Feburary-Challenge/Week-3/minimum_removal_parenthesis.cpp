class Solution {
public:
    string func(string s, int FL){
        string temp="";
        stack< char > st;
            for(auto x:s){
                if(x!=')' && x!='(') temp+=x;
                else{
                    if(!FL){
                    if(x=='('){
                        temp+=x;
                        st.push(x);
                    }else{
                        if(!st.empty()){
                            temp+=')';
                            st.pop();
                        }
                        
                    }}else{
                         if(x==')'){
                        temp+=x;
                        st.push(x);
                    }else{
                        if(!st.empty()){
                            temp+='(';
                            st.pop();
                        }
                        
                    }
                    }
                }
                
            }
        while(!st.empty()) st.pop();
        return temp;
    }
    string minRemoveToMakeValid(string s) {
        s = func(s,0);
        reverse(begin(s), end(s));   
        s = func(s,1);
        reverse(begin(s), end(s));
        return s;
    }
};
