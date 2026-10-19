class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
       int index=-1;
        while(k){
            int m=INT_MAX;
            for(int i=0;i<nums.size();i++){
                if(nums[i]<m){
                m=nums[i];
                index=i;
                }
            }
            nums[index]=m*multiplier;
            k--;
        }
        return nums;
    }
};