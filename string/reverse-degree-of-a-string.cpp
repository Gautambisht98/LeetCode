class Solution {
public:
    int reverseDegree(string s) {
        int n = s.length();
        int total = 0;

        for (int j = 0; j < n; j++) {

            int reverse = 26 - (s[j] - 'a');
            total = total + reverse * (j + 1);
        }
        return total;
    }
};