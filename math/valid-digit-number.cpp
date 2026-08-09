class Solution {
public:
    bool validDigit(int n, int x) {

        int temp = n;
        while (n >= 10) {
            n /= 10;
        }
        if (n == x) {
            return false;
        }
        n = temp;
        while (n ) {
           int digit = n% 10;
            if (digit == x) 
                return true;
                n /= 10;
            
        }
        if (temp == 0 && x == 0) {
            return false;
        }
        return false;
    }
};