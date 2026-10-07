class Solution {
public:
    int minElement(vector<int>& nums) {
        int n=nums.size();
        int index=0;
        int mn=INT_MAX;
        int sum=0;
        while(index < n){
        while(nums[index]!=0){
            int digit=nums[index]%10;
            sum+=digit;
            nums[index]/=10;
        }
        nums[index]=sum;
        sum=0;
        mn=min(nums[index],mn);

        index++;
        }
        return mn;
    }
};