class Solution {
public:
    bool isPalindrome(string s) {
        if(isalpha(s.size()==1))
        return false;
        for(int i=0;i<s.size();i++){
            s[i]=tolower(s[i]);
        }
        string ans="";
        for(auto x:s){
            if(isalnum(x))
            ans+=x;
        }
        int start=0,end=ans.size()-1;
        while(start<end){
            if(ans[start]!=ans[end])
            return false;
            else
            start++,end--;
        }
        return true;
    }
};