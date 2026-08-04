class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int mini=*min_element(nums.begin(),nums.end());
         int maxi=*max_element(nums.begin(),nums.end());
         vector<int>ans(maxi+1,0);
         vector<int>result;
         for(int i=0;i<nums.size();i++){
           ans[nums[i]]++;
         }
         for(int i=mini;i<maxi;i++){
            if(ans[i]==0){
                result.push_back(i);
            }
         }
         return result;
    }
};