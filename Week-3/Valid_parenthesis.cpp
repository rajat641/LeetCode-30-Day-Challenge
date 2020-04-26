class Solution {
public:
    bool checkValidString(string s) {
            if(s=="") return 1;
            int sz = s.length();
           // if(s[0]==')' || s[sz-1]=='(') return 0;
           int open =0;
            for(int u=0;u<sz;u++){
               if(s[u]=='(' || s[u]=='*') open++;
               else{
                   --open;
                   if(open<0)return 0;
               }
             }
           open =0;
            for(int u=sz-1;u>=0;u--){
               if(s[u]==')' || s[u]=='*') open++;
               else{
                   --open;
                   if(open<0)return 0;
               }
             }
        
        
        return 1;
           
    }
};





