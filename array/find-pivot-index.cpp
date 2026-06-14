class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalsum = 0;
        for (int i = 0; i < nums.size(); i++) {
            totalsum = totalsum + nums[i];
        }
        int prefix_sum = 0;
        for (int i = 0; i < nums.size(); i++) {

            int suffix_sum = totalsum - prefix_sum - nums[i];

            if (suffix_sum == prefix_sum) {
                return i;
            }
            prefix_sum = prefix_sum + nums[i];
        }

        return -1;
    }
};