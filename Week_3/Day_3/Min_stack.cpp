class MinStack {
    private:
    stack<int>st;
    stack<int>stmin;
public:
    MinStack() {
        
    }
    
    void push(int value) {
      st.push(value);
      if(stmin.empty()|| value <= stmin.top()){
        stmin.push(value);
      }
    }
    
    void pop() {
        if(st.top()==stmin.top()){
            stmin.pop();
        }
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return stmin.top();
    }
};
