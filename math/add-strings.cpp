class Solution {
public:
    string addStrings(string num1, string num2) {
        long long x = stoi(num1);
        long long y = stoi(num2);

        string ans = to_string(2*x + (y-x));
        return ans;
    }
};