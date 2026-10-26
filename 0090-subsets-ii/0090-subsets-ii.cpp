class Solution {
public: 
         void subset(vector<int>& nums,vector<vector<int> >&ans,vector<int>&temp,int index,int n){
                ans.push_back(temp);
            for(int i=index;i<n;i++){
                if(i>index && nums[i]==nums[i-1])
                continue;
            // taken
            temp.push_back(nums[i]);
            subset(nums,ans,temp,i+1,n);
            temp.pop_back();
            }
         }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int> >ans;
        vector<int>temp;
        subset(nums,ans,temp,0,n);
        return ans;
    }
};