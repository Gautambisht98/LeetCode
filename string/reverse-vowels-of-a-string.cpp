class Solution {
public:
    string reverseVowels(string s) {
        int n=s.length();
      int left=0;
      int right=n-1;
      string vowels ="aeiouAEIOU";
      while(left<right){
        if(vowels.find(s[left])!=string::npos){
            right--;
        }
        else if(vowels.find(s[right])!=string::npos){
            left++;
        }
        else{
            swap(s[left],s[right]);
            left++;
            right--;
        }
      }
      return s;
    }
};