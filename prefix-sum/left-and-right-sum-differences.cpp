class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> answer(nums.size());
        vector<int> leftSum(nums.size());
        vector<int> rightSum(nums.size());
        int sum1 = 0;
        for (int i = 0; i < nums.size(); i++) {

            leftSum[i] = sum1;
            sum1 = sum1 + nums[i];
        }
        int sum2 = 0;
        for (int i = nums.size() - 1; i >= 0; i--) {

            rightSum[i] = sum2;
            sum2 = sum2 + nums[i];
        }
        for (int i = 0; i < nums.size(); i++) {
            answer[i] = abs(leftSum[i] - rightSum[i]);
        }
        return answer;
    }
};