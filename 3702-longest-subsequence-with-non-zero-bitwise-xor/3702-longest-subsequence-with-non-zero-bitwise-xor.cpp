class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        long long sum=0;
        for(int i=0;i<n;i++){
           ans^=nums[i];
           sum+=nums[i];
        }
        if(sum==0)
        return 0;
        else if(ans!=0)
        return n;
        else 
        return n-1;
    

    }
};