class Solution {
public:
    int calculate(string s) {
        if(s=="") return 0;
        string d  ="";
        for(auto i:s){
            if(i!=' ') d+=i;
        }
        stack< int > s1;
       // stack< char > sym;
       char sign = '+';
        int res =0, sum=0;
       // cout<<d<<endl;
        for(int i =0;i<d.length();i++){
            if(d[i]>='0' && d[i]<='9') sum = sum*10 + (d[i]-'0');
            if(d[i]=='+' || d[i]=='-' || d[i]=='*' || d[i]=='/' || i == d.length()-1){
                if(sign=='+') s1.push(sum);
                if(sign=='-') s1.push(-sum);
                if(sign=='*'){ int y = s1.top(); s1.pop(); s1.push(y*sum); }
                if(sign=='/'){ int y = s1.top(); s1.pop(); s1.push(y/sum);}
                sum =0;
                sign = d[i];
               
            }
           
            
            
            
        }
      //  s1.push(sum);
        while(!s1.empty()){
            res+= s1.top(); 
            s1.pop();
        }
        return res;
    }
};
