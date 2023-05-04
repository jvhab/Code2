class Solution {
public:
    void markIsland(vector<vector<char>>& grid, int i, int j, int n, int m) {
        if (i < 0 || j < 0 || i == n || j == m || grid[i][j] == '0') {
            return;
        }
        grid[i][j] = '0';
        markIsland(grid, i + 1, j, n, m);
        markIsland(grid, i, j + 1, n, m);
        markIsland(grid, i - 1, j, n, m);
        markIsland(grid, i, j - 1, n, m);
        return;
    }

    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int res{};
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == '1') {
                    res++;
                    markIsland(grid, i, j, n, m);
                }
            }
        }
        return res;
    }
};