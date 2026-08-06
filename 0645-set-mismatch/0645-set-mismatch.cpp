class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        vector<int>result;
        for(int i=0;i<n;i++){
            nums[i]--;
        }
        for(int i=0;i<n;i++){
            nums[nums[i]%n]+=n;
        }
        for(int i=0;i<n;i++){
            if(nums[i]/n==2)
            result.push_back(i+1);
            }
            for(int i=0;i<n;i++){
                if(nums[i]/n==0){
                    result.push_back(i+1);
                }
            }
        
        return result;
    }
};