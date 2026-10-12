class Solution {
public:
    string truncateSentence(string s, int k) {
        // in built function jo string ko access krega
        stringstream ss(s); 
        string s1;
        string ans="";
        for(int i=0;i<k;i++){
            // s ke saare element ko s1 me push krega
            ss>>s1;
            ans+=s1;
            if(i!=k-1)
            ans+=" ";
        }
        return ans;
    }
};