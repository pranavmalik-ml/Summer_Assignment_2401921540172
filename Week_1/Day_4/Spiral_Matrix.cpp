class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rowstart = 0;
        int rowend = matrix.size() - 1;
        int colstart = 0;
        int colend = matrix[0].size() - 1;
        vector<int> result;
        while(rowstart <= rowend && colstart <= colend) {     
            for(int i = colstart; i <= colend; i++) {
                result.push_back(matrix[rowstart][i]);
            }
            rowstart++;   
            for(int i = rowstart; i <= rowend; i++) {
                result.push_back(matrix[i][colend]);
            }
            colend--; 
            if(rowstart <= rowend) {
                for(int i = colend; i >= colstart; i--) {
                    result.push_back(matrix[rowend][i]);
                }
                rowend--;
            } 
            if(colstart <= colend) {
                for(int i = rowend; i >= rowstart; i--) {
                    result.push_back(matrix[i][colstart]);
                }
                colstart++;
            }
        }
        return result;
    }
};