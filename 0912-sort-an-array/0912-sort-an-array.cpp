class Solution {
public:

void merge(vector<int>& arr,int start,int mid,int end){
    vector<int>temp(end-start+1);
    int left=start,right=mid+1,index=0;
    while(left<=mid && right<=end){
        if(arr[left]<=arr[right]){        
         temp[index]=arr[left];
        index++;
        left++;
        }
        else{
            temp[index]=arr[right];
            index++;
            right++;
        }
    }
    // left array empty na ho
    while(left<=mid){
        temp[index]=arr[left];
        index++;
        left++;
        
    }
    // right array empty na ho
    while(right<=end){
        temp[index]=arr[right];
        index++;
        right++;
        
}
  // put this value in array
  index=0;
  while(start<=end){
      arr[start]=temp[index];
      index++;
      start++;
  }
}

void mergesort(vector<int>& arr,int start,int end){
    
    // base case
    if(start==end)
    return;
    
    int mid=start+(end-start)/2;
    //left array
    mergesort(arr,start,mid);
    //right array
    mergesort(arr,mid+1,end);
    
    merge(arr,start,mid,end);
}

    vector<int> sortArray(vector<int>& nums) {
         mergesort(nums, 0, nums.size() - 1);
        return nums;
    }
};