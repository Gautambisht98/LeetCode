class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int st = 0, end = nums.size() - 1;
        vector<int> ans;
        while (st <= end) {
            int mid = st + (end - st) / 2;
            if (nums[mid] == target) {
                for (int i = 0; i < nums.size(); i++) {
                    if (nums[i] == target) {
                        ans.push_back(i);
                    }
                }
                return ans;
            }

            if (nums[mid] < target) {
                st = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return ans;
    }
};
