class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int n=stones.size();
        int count=0;
        for(int i=0;i<jewels.size();i++){
           for(int j=0;j<n;j++){
            if(jewels[i]==stones[j]){
                count++;
            }
           }
        }
        return count;
        
    }
};