class Solution {
public:

void subsets(vector<int>arr,int index,int n,vector<vector<int>>&ans,vector<int>&temp){
    // base condition
    if(index==n){
        ans.push_back(temp);
        return;
    }
    // agar include na krna ho
    subsets(arr,index+1,n,ans,temp);
    // agar include krna ho
    temp.push_back(arr[index]);
    subsets(arr,index+1,n,ans,temp);
    temp.pop_back();
};

    vector<vector<int>> subsets(vector<int>& nums) {
        int m=nums.size();
        vector<vector<int> >ans;
        vector<int>temp;
        subsets(nums,0,m,ans,temp);
        return ans;
    }
};