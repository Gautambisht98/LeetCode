class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int smallest = nums[0];
        int largest = nums[n - 1];
        int j=0;
        for (int i = 0; i <= largest - smallest; i++) {
            if (smallest + i != nums[j]){
                ans.push_back(smallest + i);
            }
            else{
                j++;
            }
                
        }
        return ans;
    }
};