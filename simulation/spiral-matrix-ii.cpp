class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
         vector<vector<int>> ans(n, vector<int>(n));

        int srow=0,scol=0;
        int erow=n-1,ecol=n-1;
        int val=1;
        
        while(srow<=erow && scol<=ecol){
            for(int j=scol;j<=ecol;j++){
                ans[srow][j]=val++;
            }

            for(int i=srow+1;i<=erow;i++){
                ans[i][ecol]=val++;
            }

            for(int j=ecol-1;j>=scol;j--){
                if(srow==erow){
                    break;
                }
                ans[erow][j]=val++;
            }

            for(int i=erow-1;i>=srow+1;i--){
                if(scol==ecol){
                    break;
                }
                ans[i][scol]=val++;
            }
            srow++,scol++;ecol--,erow--;
        }
        return ans;
    }
};
    