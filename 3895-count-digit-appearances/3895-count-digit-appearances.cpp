class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int n=nums.size();
        int count=0;
            for(int i=0;i<n;i++){
                while(nums[i]){
                    int d=nums[i]%10;
                    if(d==digit)
                    count++;
                    nums[i]/=10;
                }
            }
    
        return count;
    }
};