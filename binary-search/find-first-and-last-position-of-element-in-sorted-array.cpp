class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int st = 0, end = nums.size() - 1;
        while (st <= end) {
            int mid = st + (end - st) / 2;
            if (nums[mid] == target) {
                for (int i = 0; i < nums.size(); i++) {
                    if (nums[i] == target) {
                        int j = i;
                        while (j + 1 < nums.size() && nums[j + 1] == target) {
                            j++;
                        }
                        return {i, j};
                    }
                }
            }
            if (nums[mid] < target) {
                st = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return {-1, -1};
    }
};