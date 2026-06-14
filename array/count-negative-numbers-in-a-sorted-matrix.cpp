class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        int i, j;
        int m = grid.size();
        int n = grid[i].size();
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                if (grid[i][j] < 0) {
                    count++;
                }
            }
        }
        return count;
    }

}
;