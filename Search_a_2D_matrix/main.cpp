class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = 0;
        int m = matrix[0].size() - 1;
        bool res = false;
        while (n < matrix.size() && m >= 0) {
            if (matrix[n][m] > target) {
                m--;
            }
            else if (matrix[n][m] < target) {
                n++;
            }
            else {
                return true;
            }
        }
        return res;
    }
};