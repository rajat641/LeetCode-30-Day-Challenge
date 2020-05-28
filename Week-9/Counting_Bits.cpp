class Solution {
public:
    vector<int> countBits(int num) {
        int two = 4; 
        int sub =1;
        vector< int >ans(num+1, 0);
      for(int i=0;i<=num;i++){
          if(i==0) continue;
          if(i==1) ans[i]=1;
          if(i>1){
              if(i*2==two){
                  two*=2;
                  sub =1;
                  ans[i]=1;
              }else{
                  int j = ans[sub++]+1;
                  ans[i]=j;
              }
          }
      }
        return ans;
    }
};
