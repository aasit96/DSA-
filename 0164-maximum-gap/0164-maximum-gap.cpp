class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n=nums.size();
        if(n<=1)
        return 0;
        sort(nums.begin(),nums.end());
        int ans=INT_MIN;
        int start=0,end=1;
        while(end<n){
            int d=nums[end]-nums[start];
            ans=max(ans,d);
            start++;
            end++;
        }
        return ans;

    }
};