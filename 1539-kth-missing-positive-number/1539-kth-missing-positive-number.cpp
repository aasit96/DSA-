class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        vector<long long>result(2001,0);
        for(int i=0;i<n;i++){
            result[arr[i]]=arr[i];
        }
         int count=0;
        for(int i=1;i<2001;i++){
            if(result[i]==0){
            count++;
            if(count==k)
            return i;
            }
        }
        return 0;
    }
};