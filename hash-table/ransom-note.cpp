class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> freq1;
        for (char num : ransomNote) {
            freq1[num]++;
        }
        unordered_map<char, int> freq2;
        for (char num : magazine) {
            freq2[num]++;
        }
        for (char num : ransomNote) {
            if (freq1(num) > freq2(num)) {
                return false;
            }
        }
        return true;
    }
};