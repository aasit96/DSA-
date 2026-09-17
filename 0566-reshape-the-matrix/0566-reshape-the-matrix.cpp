class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m=mat.size();
        int n=mat[0].size();
        if(r*c!=m*n)
        return mat;
        vector<vector<int>>reshape(r,vector<int>(c));
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                int k=i*c+j;
                int row=k/n;
                int col=k%n;
                reshape[i][j]=mat[row][col];
            }
        }
        return reshape;

    }
};