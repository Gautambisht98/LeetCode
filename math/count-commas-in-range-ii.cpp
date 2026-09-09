class Solution {
public:
    long long countCommas(long long n) {
    long long count=0;
        for(long long i=1;i<=n;i++){
            long long x=i;
            long long digits=0;
            while(x>0){
                digits++;
                x/=10;
            }
            count+=(digits-1)/3;
        }
        return count;
    }
};