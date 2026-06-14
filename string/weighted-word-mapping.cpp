class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string result="";
        for(string word:words){
            int sum=0;
            for(char ch:word){
                sum=sum+weights[ch-'a'];
            }
            int mod=sum%26;

            char reversech='z'-mod;
            
            result=result+reversech;
        }
        return result;
    }
};