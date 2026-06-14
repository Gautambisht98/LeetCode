class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n=nums.size();
        int leftsum=0;
        int rightsum=0;
        int totalsumdiff=0;
        int count=0;
        for(int i=0;i<n-1;i++){
            leftsum=leftsum+nums[i];
            rightsum=0;
            for(int j=i+1;j<n;j++){
              rightsum=rightsum+nums[j];
            }
            totalsumdiff=leftsum-rightsum;
            if(totalsumdiff%2==0){
                count++;
            }
        }
        return count;
    }
};