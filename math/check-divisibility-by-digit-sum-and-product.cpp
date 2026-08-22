class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int product=1;
        int temp=n;
        while(n>0){
            int digit=n%10;
            sum=sum+digit;
             product=product*digit;
            n=n/10;
        }
       int total=sum+product;
       if(temp%total==0){
        return true;
       }
       else{
        return false;
       }
    }
};