class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int sum=0;
        if(n%2!=0){
            int i=0,j=0;
            while(i<n && j<n){
                
                    sum=sum+mat[i][j];
                    i++;j++;
            }
            int k=0,l=n-1;
            while(k<n && l>=0){
                sum=sum+mat[k][l];
                k++;l--;
            }
            int y=n/2;
            sum=sum-mat[y][y];
            }
            else{
                int a=0,b=0;
                while(a<n && b<n){
                    sum=sum+mat[a][b];
                    a++;b++;
                }
                int c=0,d=n-1;
                while(c<n && d>=0){
                    sum=sum+mat[c][d];
                    c++;d--;
                }
            }
            return sum;
    }
};