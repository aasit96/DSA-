class Solution {
public:
     void lpsfind(vector<int>&lps,string s)
     {
        int pre=0,suff=1;
        while(suff<s.size()){
            // match kre pre,suff
            if(s[pre]==s[suff]){
                lps[suff]=pre+1;
                pre++;
                suff++;
            }
            // agar match na kre
            else
            {
                if(pre==0){
                lps[suff]=0;
                suff++;
                }
                else
                pre=lps[pre-1];
            }

        }
     }
    int strStr(string haystack, string needle) {
       vector<int>lps(needle.size(),0);
        lpsfind(lps,needle);
        int first=0,second=0;
        while(first<haystack.size() && second<needle.size()){
            // match kre
            if(haystack[first]==needle[second]){
            first++;
            second++;
            }
            else
            if(second==0)
            first++;
            else
            second=lps[second-1];
        }
        if(second==needle.size())
        return first-second;
        else
        return -1;
    }
};