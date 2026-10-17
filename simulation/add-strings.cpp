class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = num1.size() - 1;
        int j = num2.size() - 1;
        int carry = 0;
        string result = "";
        while (i >= 0 || j >= 0 || carry != 0) {
            int d1 = 0, d2 = 0;
            if (i >= 0) {
                d1 = num1[i] - '0';
            }
            if (j >= 0) {
                d2 = num2[j] - '0';
            }
            int sum = d1 + d2 + carry;
            carry = sum / 10;
            result += to_string(sum % 10);
            i--;
            j--;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};