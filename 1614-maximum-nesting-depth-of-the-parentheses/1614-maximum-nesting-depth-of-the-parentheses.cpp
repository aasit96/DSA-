class Solution {
public:
    int maxDepth(string s) {
        int count=0;
        int ans=0;
        for(auto x:s)
        {
            if(x=='(')
            {
                count++;
                ans=max(ans,count);
            }
            else if(x==')')
            {
                count--;
            }
        }
        return ans;
    }
};