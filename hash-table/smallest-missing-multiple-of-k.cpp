class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        
        for(int num:nums){
            freq[num]++;
        }
        int i=1;
        while(k>0){
            
            if(freq[k*i]==0){
             i++;
            }else{
                int ans=k*i;
                break;
            }
        }
        return ans;
    }
};