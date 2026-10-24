class Solution {
public:
    char findTheDifference(string s, string t) {
        if(s.size()==0)
        return t[0];
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int start=0;
        while(start<s.size()){
            if(s[start]==t[start])
            start++;

            else
            return t[start];
        }
        return t[start];
    }
};