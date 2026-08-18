class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int n=points.size();
        int ans=INT_MAX;
        int k=-1;
        for(int i=0;i<n;i++){
            if(points[i][0]==x || points[i][1]==y){
              int a=abs(points[i][0]-x)+abs(points[i][1]-y);
              if(a<ans){
               k=i;
               ans=a;
              }
            }

        }
        return k;
    }
};