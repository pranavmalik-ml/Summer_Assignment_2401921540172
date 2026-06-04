class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<int>newmat;
         vector<vector<int>> res(r,vector<int>(c));
        int row = mat.size();
        int col = mat[0].size();
        int k  = 0;
        if(row*col!=r*c) return mat;

        for(int i = 0; i<row; i++){
           for(int j = 0; j<col; j++){
            newmat.push_back(mat[i][j]);
           }
           
           
        }
        for(int i = 0; i<r; i++){
            for(int j = 0; j<c; j++){
                res[i][j]=newmat[k++];
            }
        }
        return res;
    }
};