class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> seen;
        while (n != 1 && seen.count(n) == 0) {
            seen.insert(n);
            int square = 0;
            while (n > 0) {
                int digit = n % 10;
                square += digit * digit;
                n = n / 10;
            }

            n = square;
        }
        return n == 1;
    }
};