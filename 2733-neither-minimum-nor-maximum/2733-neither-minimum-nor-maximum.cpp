class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int n=nums.size();
        if(n<3){
            return -1;
        }
         int mn=min({nums[0],nums[1],nums[2]});
         int mx=max({nums[0],nums[1],nums[2]});
             for(int i=0;i<3;i++){
             if(nums[i]>mn && nums[i]<mx)
                return nums[i];
             }
        
        return -1;
    }
};