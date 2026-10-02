class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>left;
        vector<int>middle;
        vector<int>right;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<pivot)
            {
                left.push_back(nums[i]);
            }
            else if(nums[i]==pivot)
            {
                middle.push_back(nums[i]);
            }
            else
            {
                right.push_back(nums[i]);
            }
        }
        for(int i=0;i<middle.size();i++){
            left.push_back(middle[i]);
        }
        for(int i=0;i<right.size();i++)
        {
            left.push_back(right[i]);
        }
        return left;
    }
};