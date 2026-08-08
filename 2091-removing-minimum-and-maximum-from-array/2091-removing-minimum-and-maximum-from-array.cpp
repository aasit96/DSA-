class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int maxindex=0;
        int miniindex=0;
        if(n==1){
            return 1;
        }
        if(n==2){
            return 2;
        }
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            if(nums[i]>maxi){
            maxi=nums[i];
            maxindex=i;}
        }
        for(int j=0;j<n;j++){
            if(nums[j]<mini){
            mini=nums[j];
           miniindex=j;}
        }
        int result1=min(maxindex,miniindex);
        int result2=max(maxindex,miniindex);
        // from left 
        int front=result2+1;
        // from right
        int back=n-result1;
        //from both direction
        int both=(result1+1)+(n-result2);
        int finalans=min({front,back,both});
        return finalans;
    }
};