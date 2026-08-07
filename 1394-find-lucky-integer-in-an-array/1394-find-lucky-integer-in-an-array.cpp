class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>freq;
        for(auto x:arr){
            freq[x]++;
        }
        int ans=-1;
           for(auto x:freq){
            if(x.second==x.first){
                ans=max(ans,x.first);
            }
            }
        return ans;
    }
};