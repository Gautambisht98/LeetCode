class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1] + 1) {
                sum += nums[i];
            } else {
                break;
            }
        }
        
        for(int i=0;;i++){
            bool found = false;
            for (int j = 0; j < nums.size(); j++) {
                if (sum + i == nums[j]) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                return sum + i;
            }
        }
    
    }
};