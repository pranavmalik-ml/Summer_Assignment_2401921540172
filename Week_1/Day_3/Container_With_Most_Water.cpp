class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int res = INT_MIN;
        while(left<right){
            int len = right-left;
            if(height[left]<height[right]){
              int area = height[left]*len;
              res = max(res,area);
              left++;
            }
            else{
                int area = height[right]*len;
                res = max(res,area);
                right--;
            }
        }
        return res;
    }
};