class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int ,int> freq;
        int sum=0;
        for(auto x:nums){
            freq[x]++;
        }
        for(auto x:freq){
            if(x.second==1){
                sum+=x.first;
            }
        }
        return sum;
        
    }
};