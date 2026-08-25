class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        int num;
        for(num:nums){
            freq[num]++;
        }
        int i=1;
        while(k>0){
            
            if(freq[num]!=k*i){
             i++;
            }else{
                int ans=k*i;
                break;
            }
        }
        return ans;
    }
};