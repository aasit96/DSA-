class Solution {
public:
    int climbStairs(int n) {
    //     if(n==0)
    //     return 1;
    //     if(n<=3)
    //     return n;
    //    return climbStairs(n-1)+climbStairs(n-2);
  if(n<=2)
  return n;

  long a=1;
  long b=2;
  for(int i=3;i<=n;i++){
    long c=a+b;
    a=b;
    b=c;
  }
  return b;

    }
};