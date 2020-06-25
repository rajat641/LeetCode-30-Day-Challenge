class Solution {
public:
    
    string getPermutation(int n, int k) {
        vector< int > fact(10, 1);
        vector< int > number;
        for(int i=1;i<=9;i++){
            fact[i] = fact[i-1]*i;
            number.push_back(i);
        }
        --k;
        string ans = "";
        for(int in = 1;in<=n;in++){
            
            int index = k/fact[n-in];
            ans+= to_string(number[index]);
            number.erase(number.begin()+index);
            k-= index*fact[n-in];
            
        }
        return ans;
        
    
        
      
    }
};
