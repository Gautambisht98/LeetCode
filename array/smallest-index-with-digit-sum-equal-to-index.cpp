class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int ans = -1;

        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int sum = 0;
            int temp = nums[i];
            while (temp > 0) {
                sum = sum + temp % 10;
                temp /= 10;
            }
            if (sum == i) {
                ans = i;
                break;
            }
        }
        return ans;
    }
};