class Solution {
public:
    string sortVowels(string s) {
        vector<int>lower(26,0);
        vector<int>upper(26,0);
        for(int i=0;i<s.size();i++){
            //lowercase a e i o u
            if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u'){
            lower[s[i]-'a']++;
            s[i]='#';
            }

            //uppercase A E I O U
            else if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
            upper[s[i]-'A']++;
            s[i]='#';}
        }
        string ans;
        for(int i=0;i<26;i++){
           char c='A'+i;
           while(upper[i]){
            ans+=c;
            upper[i]--;
           }
        }
           for(int i=0;i<26;i++){
            char c='a'+i;
            while(lower[i]){
                ans+=c;
                lower[i]--;
            }

           }
           int first=0,second=0; //first wala pointer s string per hoga and second pointer ans string per hoga
           while(second<ans.size()){
            if(s[first]=='#'){
                s[first]=ans[second];
                second++;
            }
            first++;
           }
           return s;

    }
};