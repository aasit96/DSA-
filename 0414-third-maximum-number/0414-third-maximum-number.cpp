class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n=nums.size();
        long firstmax=LONG_MIN;
        long secondmax=LONG_MIN;
        long thirdmax=LONG_MIN;
      
        for(int i=0;i<n;i++){
              if(nums[i]==firstmax || nums[i]==secondmax|| nums[i]==thirdmax)
        continue;
            if(nums[i]>firstmax){
                thirdmax=secondmax;
                secondmax=firstmax;
                firstmax=nums[i];
            }
            else if(nums[i]>secondmax){
                 thirdmax=secondmax;
                 secondmax=nums[i];
            }
            else if(nums[i]>thirdmax){
                thirdmax=nums[i];
            }
        }
        // agar thirdmax=INT_MIN agar true hai to firstmax , agar false thirdmax
        return thirdmax == LONG_MIN ? firstmax : thirdmax;

    }
};