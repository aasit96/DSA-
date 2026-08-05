class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // int maxi=INT_MIN;
        // // brute force jisme saare subarray ko check krega
        // for(int i=0;i<nums.size();i++){
        //     int product=1;
        //     for(int j=i;j<nums.size();j++){
        //         product*=nums[j];
        //         maxi=max(maxi,product);
        //     }
        // }
        // return maxi;
        int n=nums.size();
        int prefix=1;
        int suffix=1;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
           if(prefix==0){
            prefix=1;}
            if(suffix==0){
            suffix=1;
           }
            prefix*=nums[i];
            suffix*=nums[n-1-i];
            int y=max(prefix,suffix);
            maxi=max(maxi,y);

        }
        return maxi;
    }
};