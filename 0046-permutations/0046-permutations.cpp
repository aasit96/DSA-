class Solution {
public:
     void permut(vector<int>& nums, vector<int>temp,vector<vector<int> >&ans,vector<bool>&visited,int n){
        if(visited.size()==temp.size()){
            ans.push_back(temp);
            return ;
        }
        for(int i=0;i<n;i++){
            if(visited[i]==0){
                visited[i]=1;
                temp.push_back(nums[i]);
                permut(nums,temp,ans,visited,n);
                visited[i]=0;
                temp.pop_back();
            }
        }
     }
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<int>temp;
        vector<vector<int> >ans;
        vector<bool>visited(n,0);
        permut(nums,temp,ans,visited,n);
        return ans;
    }
};