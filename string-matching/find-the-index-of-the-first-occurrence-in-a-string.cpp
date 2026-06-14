class Solution {
public:
    int strStr(string haystack, string needle) {
       /* int i=0;
        int n=haystack.length();
        while(i<n){
          if(haystack[i]==needle[i] ){
            return i;
          }
          i++;
        }*/

        int pos=haystack.find(needle);
        if(pos==string::npos){
            return -1;
        }
        return pos;
    }
};