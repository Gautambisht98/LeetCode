class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int count=0;
        int current=0;
        for(int i=0;i<requests.size();i++){
           int diff=current-requests[i];
        
        if(diff<0){
            diff=-diff;
        }
        count=count+diff;
        current=requests[i];
        }
        return count;
    }

};