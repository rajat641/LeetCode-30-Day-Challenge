stack< pair< int , int > >st;
class StockSpanner {
public:
    
    StockSpanner() {
        while(!st.empty()) st.pop();
    }
    
    int next(int price) {
        if(st.empty() || st.top().first>price){
            st.push({price, 1});
            return 1;
                
        }else{
            int ans =1;
            while(!st.empty()){
                if(st.top().first>price) break;
                pair< int, int >i = st.top(); st.pop();
                ans+=i.second;
            }
            st.push({price, ans});
            return ans;
        }
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
