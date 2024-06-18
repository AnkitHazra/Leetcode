class MinStack {
private Stack<Integer>st;
private Stack<Integer>min;
public MinStack() {
        st=new Stack<>();
        min=new Stack<>();
    }
    
    void push(int val) {
        if(st.size()==0 ||min.peek()>=val){
            min.push(val);
        }
        st.push(val);
    }

    
    void pop() {
    int ele1=st.pop();    
    int ele2=min.peek();
    if (ele1==ele2){
        min.pop();
    }
    }
    
    int top() {
        return st.peek();
    }
    
    int getMin() {
        return min.peek();
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