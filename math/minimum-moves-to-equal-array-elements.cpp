class Solution {
public:
    int minMoves(vector<int>& nums) {
        int minnum=INT_MAX;
     
        for (int n:nums) {
            minnum=min(minnum,n);
        }
        int count=0;
        for(int n:nums){
            count=count+n-minnum;
        }
        return count;
    }
};