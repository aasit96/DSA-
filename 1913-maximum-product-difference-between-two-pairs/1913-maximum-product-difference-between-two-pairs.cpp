class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int n=nums.size();
        int firstmaxi=INT_MIN;
        int secondmaxi=INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]>=firstmaxi){
            secondmaxi=firstmaxi;
            firstmaxi=nums[i];
            }
            else if(nums[i]>=secondmaxi && nums[i]<firstmaxi){
                secondmaxi=nums[i];

            }
        }
        int firstmin=INT_MAX;
        int secondmin=INT_MAX;
        for(int i=0;i<n;i++){
            if(nums[i]<=firstmin){
                secondmin=firstmin;
                firstmin=nums[i];
            }
            else if(nums[i]>=firstmin && nums[i]<secondmin){
                secondmin=nums[i];
            }
        }
        long long k=(long long)firstmaxi*secondmaxi-(long long)secondmin*firstmin;
         return k;
    }
};