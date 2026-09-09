class Solution {
public:
    long long countCommas(long long n) {
    long long count=0;
        for(long long i=1;i<=n;i++){
            long long x=i;
           while(x>=1000){
            count++;
            x/=1000;
           }
   
        }
        return count;
    }
};