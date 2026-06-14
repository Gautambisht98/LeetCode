class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n = nums.size();

        int leftsum = 0, rightsum;
        int totalsum = 0;
        for (int i = 0; i < n; i++) {
            totalsum = totalsum + nums[i];
        }
        for (int j = 0; j < n; j++) {

            rightsum = totalsum - leftsum - nums[j];

            if (leftsum == rightsum) {
                return j;
            }
            leftsum = leftsum + nums[j];
        }

        return -1;
    }
};