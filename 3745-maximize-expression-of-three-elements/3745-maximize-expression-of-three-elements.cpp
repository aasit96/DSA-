class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {
        int n=nums.size();
        long firstmax=INT_MIN;
        long secondmax=INT_MIN;
        long mini=INT_MAX;
        for(int i=0;i<n;i++){
            if(nums[i]>firstmax){
                secondmax=firstmax;
                firstmax=nums[i];
            }
            else if(nums[i]>secondmax)
            secondmax=nums[i];
        }
        for(int i=0;i<n;i++){
            if(nums[i]<mini)
            mini=nums[i];
        }
        long sum=(firstmax+secondmax)-(mini);
        return sum;
    }
};