class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int st = 0, end = n - 1;

        if (n == 1)
            return nums[0];

        while (st <= end) {
            int mid = st + (end - st) / 2;

            // boundary cases FIRST
            if (mid == 0) {
                if (nums[0] != nums[1]) return nums[0];
                else st = mid + 1;
                continue;
            }

            if (mid == n - 1) {
                if (nums[n - 1] != nums[n - 2]) return nums[n - 1];
                else end = mid - 1;
                continue;
            }

            // now safe to check mid-1 and mid+1
            if (nums[mid - 1] != nums[mid] && nums[mid] != nums[mid + 1])
                return nums[mid];

            if (mid % 2 == 0) {
                if (nums[mid] == nums[mid + 1])
                    st = mid + 1;
                else
                    end = mid - 1;
            } else {
                if (nums[mid - 1] == nums[mid])
                    st = mid + 1;
                else
                    end = mid - 1;
            }
        }
        return -1;
    }
};
