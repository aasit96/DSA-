class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>arr1;
        vector<int>arr2;
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);
        int start=0,first=0,mid=2;
        while(mid<n){
            if(arr1[start]>arr2[first]){
            arr1.push_back(nums[mid]);
            mid++;
            start++;
            }
            else{
            arr2.push_back(nums[mid]);
            mid++;
            first++;
            }
        }
        for(int i=0;i<arr2.size();i++){
            arr1.push_back(arr2[i]);
        }
        return arr1;

    }
};