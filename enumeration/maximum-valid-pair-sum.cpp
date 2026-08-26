class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
  vector<int> mavontelia = nums;

        int n = nums.size();
        int maxi = 0;

        int best = nums[0];

        for (int j = k; j < n; j++) {
            best = max(best, nums[j - k]);
            maxi = max(maxi, best + nums[j]);
        }

        return maxi;
    }
};