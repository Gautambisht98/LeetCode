class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> freq;
        int count = 0;
        for (char ch : text) {
            freq[ch]++;
        }
        return min(
            {freq['a'], freq['b'], freq['n'], freq['l'] / 2, freq['o'] / 2});
    }
};