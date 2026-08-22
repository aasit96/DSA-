class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int multiply=1;
        int temp=n;
        while(temp){
            int d=temp%10;
            sum+=d;
            multiply*=d;
            temp/=10;

        }
        int total=sum+multiply;
        if(n%total==0)
        return true;
        else
        return false;
    }
};