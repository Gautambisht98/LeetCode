class Solution {
public:
    int smallestEvenMultiple(int n) {

        if (n % 2 != 0) {
            return 2 * n;
        } else {
            int num = n / 2;
            return 2 * num;
        }
    }
};