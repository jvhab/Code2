class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        bool is_col = false;
        bool is_row = false;
        for (int i = 0; i < n; ++i) {
            if (matrix[i][0] == 0) {
                is_col = true;
            }
        }
        for (int i = 0; i < m; ++i) {
            if (matrix[0][i] == 0) {
                is_row = true;
            }
        }

        for (int i = 1; i < n; ++i) {
            for (int j = 1; j < m; ++j) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
        for (int i = 1; i < n; ++i) {
            for (int j = 1; j < m; ++j) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }

        if (is_col) {
            for (int i = 0; i < n; ++i) {
                matrix[i][0] = 0;
            }
        }
        if (is_row) {
            for (int i = 0; i < m; ++i) {
                matrix[0][i] = 0;
            }
        }
    }
};