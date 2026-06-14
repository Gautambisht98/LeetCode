class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxx = 0;
        maxx=max(maxx,gain[0]);
        for (int i = 1; i < gain.size(); i++) {
            gain[i] = gain[i - 1] + gain[i];
            maxx = max(maxx, gain[i]);
        }
        return maxx;
    }
};