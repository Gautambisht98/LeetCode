class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> freq;

        for (auto x:nums){
            freq[x]++;
        }
        int maxFreq;
        for (auto i : freq) {
            maxFreq = max(maxFreq, i.second);
        }

        int count = 0;
        for (auto i : freq) {
            if (i.second == maxFreq) {
                count = count + i.second;
            }
        }
        return count;
    }
};