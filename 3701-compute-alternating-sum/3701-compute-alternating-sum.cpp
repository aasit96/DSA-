class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int n=nums.size();
        int evensum=0;
        int oddsum=0;
        for(int i=0;i<n;i=i+2){
              evensum+=nums[i];
        }
        for(int i=1;i<n;i=i+2){
            oddsum+=nums[i];
        }
        return evensum-oddsum;
    }
};