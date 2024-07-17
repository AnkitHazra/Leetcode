class MinStack {
public:
stack<long long>st; long long mini=INT_MAX; 
    MinStack() {
        
    }
    
    void push(int value) {
       long long val=(long long)value;
        if(st.empty()){
            mini=val;
            st.push(val);
        }
        else{
            if(val>mini) st.push(val);
            else{
                st.push(2*val*1LL-mini);
                mini=val;
            }
        }
    }
    
    void pop() {
        
        long long n=st.top();
        st.pop();
        if(n<mini){
            mini=2*mini-n;
        }
    }
    
    int top() {
        if(st.empty()) return 0;
        long long n=st.top();
        if(mini<n) return n;
        return mini;
    }
    
    int getMin() {
        return mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */