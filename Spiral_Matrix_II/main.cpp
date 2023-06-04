class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<pair<int, int>> dir{ {0, 1}, {1, 0}, {0, -1}, {-1, 0} };
        vector<vector<int>> res(n, vector<int>(n, 0));
        int cnt{ 1 };
        int row{};
        int col{};
        int i{};
        while (cnt <= n * n) {
            if (col + dir[i].second >= n || row + dir[i].first >= n || col + dir[i].second < 0 || row + dir[i].first < 0 ||
                res[row + dir[i].first][col + dir[i].second] != 0) {
                i++;
                i = i % 4;
            }
            res[row][col] = cnt;
            cnt++;
            row += dir[i].first;
            col += dir[i].second;
        }
        return res;
    }
};