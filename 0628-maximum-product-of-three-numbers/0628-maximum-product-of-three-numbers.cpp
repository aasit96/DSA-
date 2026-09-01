class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();
         long long ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
         long long ans1=nums[0]*nums[1]*nums[n-1];
         long long ans2=nums[n-1]*nums[n-2]*nums[n-3];
           ans=max(ans1,ans2);
        }
        return ans;
    }
};