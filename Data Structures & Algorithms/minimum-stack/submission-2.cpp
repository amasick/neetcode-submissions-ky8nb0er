class MinStack {
      
        stack<int> st_main;
        stack<int>st_min; 
        int curr_min=INT_MAX; 
public:
    MinStack() {
        
        
        
        
    }
    
    void push(int val) {
        st_main.push(val);
        if(val<=curr_min){
            st_min.push(val);
            curr_min=val;
        }        
    }
    
    void pop() {
        int ele=st_main.top();
        st_main.pop();
        if(ele==curr_min){
            st_min.pop();
        }
curr_min = st_min.empty() ? INT_MAX : st_min.top();    }
    
    int top() {
        int ele=st_main.top();
        return ele;
        
    }
    
    int getMin() {
        return st_min.top();


        
    }
};
