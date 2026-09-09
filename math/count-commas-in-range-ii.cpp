class Solution {
public:
    long long countCommas(long long n) {
    int count=0;
        for(int i=1;i<=n;i++){
            if(i>=1000){
              count++;
            }
        }
        return count;
    }
};