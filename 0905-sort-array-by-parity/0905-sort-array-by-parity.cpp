class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
       int n=nums.size();
       int start=0,end=0;
       while(end<n){
        if(nums[end]%2==0){
            swap(nums[start],nums[end]);
            start++;
            }
            end++;

        }
       return nums;
    }
};