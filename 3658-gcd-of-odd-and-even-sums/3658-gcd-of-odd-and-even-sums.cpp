class Solution {
public:
       int gcd(int a,int b)
       {
        if(b==0)
        return a;

       return gcd(b,a%b);
       }

    int gcdOfOddEvenSums(int n) {
        int sumodd=0;
        int sumeven=0;
        for(int i=1;i<=n;i++)
        {
            sumodd+=2*i-1;
            sumeven+=2*i;
        }
        
          return gcd(sumodd,sumeven);
    }
};