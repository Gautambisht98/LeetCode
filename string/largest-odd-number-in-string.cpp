class Solution {
public:
    string largestOddNumber(string s) {	
    
        //your code goes here
        int i;
        int j=-1;
        int n=s.length();

        for( i=n-1;i>=0;i--){
            if((s[i]-'0')%2==1){
                j=i;
                break;
            }
        }
         if(j==-1) return "";

         i=0;

         while(i<n){
            if(s[i]!='0') break;
            i=i+1;
         }
         return s.substr(i,j-i+1);
    }
};
