class Solution {
public:
    int smallestNumber(int n, int t) {
        while(1){
        int temp=n;
        int y=1;
        while(temp){
            y*=temp%10;
            temp/=10;
        }
        if(y%t==0)
        return n;
        n++;
        }
    }
};