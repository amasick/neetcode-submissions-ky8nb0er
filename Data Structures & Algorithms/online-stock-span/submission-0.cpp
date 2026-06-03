class StockSpanner {
public:
    stack<int>st;
    StockSpanner() {
       


        
    }
    
    int next(int price) {
        st.push(price);
        stack<int>st1=st;
        int ans=0;
        while(!st1.empty() && st1.top()<=price){
            st1.pop();
            ans++;
        }
        return ans;

        
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */