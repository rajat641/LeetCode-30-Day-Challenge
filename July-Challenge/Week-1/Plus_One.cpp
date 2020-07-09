class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        deque< int > ans;
        int sz = digits.size();
        int sum = 0, carry = 1;
        for(int i=sz-1;i>=0;i--){
            sum= digits[i]+ carry;
            //sum= sum%10;
            if(sum>9){
               carry = sum-10+1;
                sum%=10;
               
                
            }else carry =0;
            ans.push_front(sum);
        }
        if(carry>0 ) ans.push_front(carry);
        vector< int > sol(ans.begin(), ans.end());
        return sol;
    }
};
