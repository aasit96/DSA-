class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
       sort(nums1.begin(),nums1.end());
       sort(nums2.begin(),nums2.end());
       vector<int>ans;
        int n=nums1.size();
        int m=nums2.size();
        int start=0,first=0;
        while(start<n && first<m){
            if(nums1[start]<nums2[first])
            start++;
        
        else if(nums1[start]==nums2[first]){
                 ans.push_back(nums1[start]);
                 start++;
                 first++;
        }
        else
        first++;
        }
        return ans;
    }
};