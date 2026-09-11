class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();

        vector<long long> arr(nums.begin(), nums.end());

        for(int i = 0; i < n; i++){
            arr[i]--;
        }

        for(int i = 0; i < n; i++){
            arr[arr[i] % n] += n;
        }

        for(int i = 0; i < n; i++){
            if(arr[i] / n == 0){
                ans.push_back(i + 1);
            }
        }

        return ans;
    }
};