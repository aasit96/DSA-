class Solution {
public:
    int digitFrequencyScore(int n) {
        int sum=0;
        while(n){
            int digit=n%10;
            sum+=digit;
            n/=10;
        }
        return sum;
    }
};