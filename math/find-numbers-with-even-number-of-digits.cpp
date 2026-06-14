class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n=nums.size();
     int count=0,step=0;
     for(int i=0;i<n;i++){
        int a = nums[i];
        count=0;
        while(a>0){
            count++;
            a=a/10;
        }
        if(count%2==0){
            step++;
        }
     }
        
      return step;
    }
};