class Solution {
public:
    int totalNumbers(vector<int>& digits) {
      int freq[10]={0};

      for(int num:digits){
        freq[num]++;
      }

      int ans=0;

      for(int first=1;first<digits.size();first++){
        if(freq[first]==0)
        continue;

        freq[first]--;

        for(int second=0;second<digits.size();second++){
            if(freq[second]==0){
                continue;
            }
            freq[second]--;

            for(int third=2;third<=8;third=+2){
                if(freq[third]>0){
                    ans++;
                }
            }
            freq[second]++;
        }
        freq[first]++;
      }
      return ans;
    }
};