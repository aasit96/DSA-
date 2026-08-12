class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n=nums.size()/2;
        unordered_map<int,int>freq;
        for(auto x:nums){
            freq[x]++;
        }
        for(auto x:freq){
            if(x.second==n)
            return x.first;
        }
        return -1;
        
    }
};