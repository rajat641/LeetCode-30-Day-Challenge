class Solution {
public:
    string intToRoman(int num) {
        map< int , string > m;
        m[1]="I";
        m[5]="V";
        m[4]="IV";
        m[10]="X";m[90]="XC";m[900]="CM";m[40]="XL";m[400]="CD";
        m[9]="IX";m[50]="L"; m[100]="C"; m[500]="D"; m[1000]="M";
        string ans = "";
        while(num){
            int t =0;
            for(auto x:m){
                if(x.first<=num){
                    t = x.first;
                }
               
            }
             ans+= m[t];
            num-=t;
        }
        return ans;

    }
};
