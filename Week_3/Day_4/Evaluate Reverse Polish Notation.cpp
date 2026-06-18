class Solution {
public:
    int evalRPN(vector<string>& tokens) {
      stack<int>st;
      for(string a : tokens){
        if(a =="+" || a=="-"|| a=="*" || a=="/"){
            int b = st.top();
            st.pop();
            int c = st.top();
            st.pop();
            if(a == "+")
            st.push(c+b);
            else if(a == "-")
            st.push(c-b);
            else if(a=="*")
            st.push(c*b);
            else if(a=="/")
            st.push(c/b);
        }
        else {
            st.push(stoi(a));
        }
      }  
      return st.top();
    }
};