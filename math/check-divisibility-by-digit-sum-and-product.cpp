class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int product=1;
        while(n>0){
            int digit=n%10;
            int sum=sum+digit;
            int product=product*digit;
            n=n/10;
        }
       int total=sum+product;
       if(n/total){
        return true;
       }
       else{
        return false;
       }
    }
};