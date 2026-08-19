class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
       int n=players.size();
       int m=trainers.size();
       sort(players.begin(),players.end());
       sort(trainers.begin(),trainers.end());
       int start=0,end=0;
       int count=0;
       while(start<n && end<m){
          if(players[start]>trainers[end])
          end++;
          else{
          count++;
          start++;
          end++;}
       }
       return count;
    }
};