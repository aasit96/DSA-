class Solution {
public:  
        void combinationsum(vector<int>&candidates,int target,int index,vector<int>&temp,vector<vector<int>>&ans)
        {
            if(target==0)
            {
                ans.push_back(temp);
                return;
            }
            if(target<0){
                return;
            }
            for(int i=index;i<candidates.size();i++)
            {
                temp.push_back(candidates[i]);
                combinationsum(candidates,target-candidates[i],i,temp,ans);

                temp.pop_back();
            }
        }


    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>temp;
        vector<vector<int>> ans;
        int n=candidates.size();
        combinationsum(candidates,target,0,temp,ans);
        return ans;
        
    }
};