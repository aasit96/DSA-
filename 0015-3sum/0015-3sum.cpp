class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int i=0;i<n;i++){
            // duplicate se bachne ke liye kyuki agar current and lastcurrent dono same hai to uske liye bhi triplet
            if(i>0 && nums[i]==nums[i-1])
            continue;
            int start=i+1,end=n-1;
            while(start<end){
                if(nums[start]+nums[end]+nums[i]==0){
                ans.push_back({nums[i],nums[start],nums[end]});
                start++;
                end--;
                // start se duplicate se bachne ke liye
                while(start<end && nums[start]==nums[start-1])
                start++;
                while(start<end && nums[end]==nums[end+1])
                end--;
                }
                else if(nums[start]+nums[end]+nums[i]>0)
                end--;
                else
                start++;
            }

        }
        return ans;
    }
};