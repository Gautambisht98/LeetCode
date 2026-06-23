class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> ls;
        for(int num:nums){
            ls.insert(num);
        }
        int ans=0;
        for(int num :ls){
            if(ls.find(num-1)==ls.end()){
                int count=1;
                int current =num;
                while(ls.find(current+1)!=ls.end()){
                    count++;
                    current++;
                }
                ans=max(ans,count);
            }
        }
        return ans;
    }
};