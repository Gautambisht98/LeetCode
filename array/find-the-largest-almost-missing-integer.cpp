class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        int count[51] = {0};
        for(int x = 0; x < n; x++) {
            for (int i = 0; i < n - k; i++) {
                for (int j = i; j < i + k; j++) {
                    if (nums[j] == k) {
                        count[x]++;
                        break;
                    }
                }
            }
        }
        int ans = -1;
        for (int x = 0; x <= 50; x++) {
            if (count[x] == 1) {
                ans = x;
            }
        }
        return ans;
    }
};