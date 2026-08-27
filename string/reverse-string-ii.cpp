class Solution {
public:
    string reverseStr(string s, int k) {
        for(int i=1;i<=s.length();i++){
            if(i<k){
            reverse(s.begin(),s.end);
            }
        }
        return s;
    }
};