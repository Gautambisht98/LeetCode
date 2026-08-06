class Solution {
public:
    int smallestNumber(int n, int t) {
        int product =1;
        int temp=n;
        while(true){
        while(temp>0){
            int digit=temp%10;
            product=product*digit;
            temp=temp/10;
        }
        if(product%t==0){
            return n;
        }
        
        else{
            n++;
            temp=n;
            product=1;
        }
        }
    }
};