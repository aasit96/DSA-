class Solution {
public:
    string clearDigits(string s) {
        stack<int>st;
        string ans;
        for(int i=0;i<s.size();i++)
        {
            if(isalpha(s[i]))
            st.push(s[i]);
            else if(isdigit(s[i]) && !st.empty())
            {
                st.pop();
            }

        }
        if(st.empty()){
            return "";
        }
        
        else{
            while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};