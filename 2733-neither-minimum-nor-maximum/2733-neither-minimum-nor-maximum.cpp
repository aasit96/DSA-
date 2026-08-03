class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int n=nums.size();
        if(n<3){
            return -1;
        }
        int mx=INT_MIN;
        int mn=INT_MAX;
        for(int i=0;i<3;i++){
             mn=min(mn,nums[i]);
             mx=max(mx,nums[i]);
        }
             for(int i=0;i<3;i++){
             if(nums[i]>mn && nums[i]<mx)
                return nums[i];
             }
        
        return -1;
    }
};