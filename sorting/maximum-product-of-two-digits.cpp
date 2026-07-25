class Solution {
public:
    int maxProduct(int n) {
        int product=1;
        while(n>0){
            int digit=n%10;
            product=product*digit;
            n=n/10;
        }
        return product;
    }
};