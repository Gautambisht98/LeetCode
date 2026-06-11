class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
             unordered_map<int,int> mp;
        int maxlen=0;
        int sum=0;
       for(int i=0;i<nums.size();i++){
          sum+=nums[i];
          if(sum==k){
            maxlen=max(maxlen,i+1);
          }
          int rem=sum-k;

          if(mp.find(rem)!=mp.end()){
            int len=i-mp[rem];
            maxlen=max(maxlen,len);

          }
          // edge case for zeroes and neagtives 
          if(mp.find(sum)==mp.end()){
            mp[sum]=i;
          }
       } 
       return maxlen;
    }
};