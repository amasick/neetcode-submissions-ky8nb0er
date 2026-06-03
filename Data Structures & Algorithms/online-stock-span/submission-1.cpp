class StockSpanner {
public:
    // stack<int>st;
    stack<pair<int,int>>st;
    StockSpanner() {
       


        
    }
    
    int next(int price) {
        int span=1;
        // st.push(price);
        // stack<int>st1=st;
        // int ans=0;
        // while(!st1.empty() && st1.top()<=price){
        //     st1.pop();
        //     ans++;
        // }

        while(!st.empty() && st.top().first<=price){
            span+=st.top().second;
            st.pop();
            

        }
        st.push({price,span});
        return span;

        
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */