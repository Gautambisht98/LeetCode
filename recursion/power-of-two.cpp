class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n == 1) {
            return true;
        }
        if (n == 0) {
            return false;
        }
        while (n % 2 == 0 && n != 0) {
            if (n != 1) {
                n = n / 2;
            }
            if (n ==1){
                 n=0;
            }
        }
        if(n==0){
            return true;
        }
        else{
            return false;
        }

    }
};