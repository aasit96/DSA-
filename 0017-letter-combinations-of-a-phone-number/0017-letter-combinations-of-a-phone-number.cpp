class Solution {
public:
     void combination(string &digits,int index,vector<string>&ans,string &cur,vector<string>&val,int n){
        if(index==n){
            ans.push_back(cur);
            return;
        }
        string a=val[digits[index]-'0'];
        for(auto x: a){
            cur.push_back(x);
             combination(digits,index+1,ans,cur,val,n);
             cur.pop_back();
        }
     }

    vector<string> letterCombinations(string digits) {
        int n=digits.size();
        vector<string>ans;
        vector<string>val={ "","","abc","def","ghi","jkl","mno","pqrs","tuv"
        ,"wxyz"
        };
        string cur="";
        combination(digits,0,ans,cur,val,n);
        return ans;
    }
};