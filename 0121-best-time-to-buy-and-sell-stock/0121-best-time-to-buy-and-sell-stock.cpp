class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=INT_MAX;
        int maxi=0;

        for(int x: prices)
{
    mini=min(mini,x);
    maxi=max(maxi,x-mini);
    }
    return maxi;
    }
};