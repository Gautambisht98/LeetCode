class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        int k=0;
        //first element always unique
        ans.push_back(nums[0]);
        k++;
        for (int i = 1; i <n; i++) {
            if ((nums[i] != nums[i-1])) {
                ans.push_back(nums[i]);
                 k++;
            }
        }
        nums={};

        for(int i=0;i<k;i++){
            nums.push_back(ans[i]);
        }
        return k;
    }
};