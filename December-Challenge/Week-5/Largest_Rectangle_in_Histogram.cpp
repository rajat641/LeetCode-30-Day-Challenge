class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        heights.push_back(0);
        int sz = heights.size();
        stack< int > st;
        int ans = 0;
        for(int i=0;i<sz;i++){
            while(!st.empty() && heights[st.top()]> heights[i]){
                auto k = st.top(); st.pop();
                if(st.empty()) ans = max(ans, heights[k]*i);
                else ans = max(ans, heights[k]*(i-st.top()-1));
            }
            st.push(i);
        }
        return ans;
    }
};
