class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string s;
        int count=0;
        int start=0;
        while(start<strs[0].size() && start<strs[strs.size()-1].size()){
        if(strs[0][start]==strs[strs.size()-1][start]){
            s.push_back(strs[0][start]);
            start++;
        }
        else{
            break;
        }
        }
        return s;
    }
};