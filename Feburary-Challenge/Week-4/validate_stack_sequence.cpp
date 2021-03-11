class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
            int j = 0;
        int i=0;
         stack< int > st;
          while(j<popped.size()){
              
              while(!st.empty() && j<popped.size() && st.top()==popped[j]) {
                  j++; st.pop();
              }
              if(i==pushed.size()){
                  return st.empty();
              }
              st.push(pushed[i++]);
          }
        return 1;
    }
};
