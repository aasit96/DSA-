class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>left(n,0);
        vector<int>right(n,0);
        vector<int>ans(n,0);
        left[0]=1;
        right[n-1]=1;
        // left array me fill ke liye
        
         for(int i=1;i<n;i++){                   
            left[i]=nums[i-1]*left[i-1];
        }
        // right array fill ke liye
        for(int i=n-2;i>=0;i--){
            right[i]=nums[i+1]*right[i+1];
        }
        for(int i=0;i<n;i++){
            ans[i]=left[i]*right[i];
        }
        return ans;

        }
};