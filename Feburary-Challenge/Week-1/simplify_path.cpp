class Solution {
public:
    string simplifyPath(string path) {
        int sz = path.length();
        string temp = "";
        if(path.back()!='/') path+="/";
        for(auto &i:path){ // emove all double slashes
            if(i=='/' && temp.back()=='/') continue;
            temp+=i;
        }
        cout<<temp<<endl;
        string tempstr="";
        vector< string > ans;
        for(auto &i:temp){
            if(i=='/'){
                if(tempstr =="") continue;
                ans.push_back(tempstr);
                tempstr="";
            }else tempstr+=i;
        }
        for(auto &u:ans) cout<<u<<endl;
        stack< string > st;
        for(auto &u:ans){
            if(u==".."){
                if(st.size()>=1){ st.pop(); }
            }
            else if(u==".")continue;
            else st.push(u);
        }
        string fans = "";
        while(!st.empty()){
            string r = st.top(); st.pop();
            fans = "/"+r+fans;
        }
        return fans==""? "/":fans;
        
    }
};
