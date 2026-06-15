class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n=arr.size();
         int mini=arr[0],profit=0,cost;
        for(int i=1;i<n;i++){
            cost=arr[i]-mini;
            profit=max(profit,cost);
            mini=min(mini,arr[i]);
        }
        return profit;
    }
};