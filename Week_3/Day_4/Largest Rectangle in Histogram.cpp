class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {

        int n = heights.size();

        stack<int> st;      
        int Area = 0;

        for(int i = 0; i <= n; i++) {

            int curr;

            if(i == n)
                curr = 0;
            else
                curr = heights[i];

          
            while(!st.empty() &&
                  heights[st.top()] > curr) {


                int height = heights[st.top()];
                st.pop();

                int width;

                if(st.empty()) {

                    width = i;
                }
                else {

                    width = i - st.top() - 1;
                }

              
                int ar = height * width;

                Area = max(Area,ar);
            }

            st.push(i);
        }

        return Area;
    }
};