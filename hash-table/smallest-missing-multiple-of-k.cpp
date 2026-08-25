class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int, int> freq;

        for (int num : nums) {
            freq[num]++;
        }
        int i = 1;
        while (true) {
            int multi = k * i;
            if (freq[multi] == 0)
                return multi;
            i++;
        }
    }
};