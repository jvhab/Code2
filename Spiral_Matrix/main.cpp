class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int l = 0;
        int r = matrix[0].size() - 1;
        int top = 0;
        int bot = matrix.size() - 1;
        vector<int> res;
        int cnt{ 1 };
        while (l <= r && top <= bot) {
            for (size_t i = l; i <= r; ++i) {
                res.push_back(matrix[top][i]);
            }
            top++;
            for (size_t i = top; i <= bot; ++i) {
                res.push_back(matrix[i][r]);
            }
            r--;
            if (top <= bot) {
                for (int i = r; i >= l; --i) {
                    res.push_back(matrix[bot][i]);
                }
                bot--;
            }
            if (l <= r) {
                for (int i = bot; i >= top; --i) {
                    res.push_back(matrix[i][l]);
                }
                l++;
            }
        }
        return res;
    }
};