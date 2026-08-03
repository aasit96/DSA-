class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        // sort(prices.begin(),prices.end());
        // int sum=prices[0]+prices[1];
        // if(sum>money)
        // return money;
        // else if(sum==money)
        // return 0;
        // else
        // return money-sum;
        int min1=INT_MAX;
        int min2=INT_MAX;
        for(auto x:prices){
            if(x<=min1){
            min2=min1;
            min1=x;
        }
        else if(x<min2){
        min2=x;}
        }
        if(min1+min2>money)
        return money;
        else if(min1+min2==money)
        return 0;
        else
        return money-(min1+min2);
    }
};