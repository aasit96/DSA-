class Solution {
public:
    string reversePrefix(string word, char ch) {
        int store=-1;
        for(int i=0;i<word.size();i++)
        {
            if(word[i]==ch){
            store=i;
            break;
            }
        } if(store!=-1)
        reverse(word.begin(),word.begin()+store+1);
        return word;
    }
};