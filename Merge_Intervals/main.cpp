class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        int n = intervals.size();
        sort(intervals.begin(), intervals.end(), [](vector<int> a, vector<int> b) {return a[0] < b[0]; });
        res.push_back(intervals[0]);
        for (size_t i = 1; i < n; ++i) {
            if (res.back()[1] < intervals[i][0]) {
                res.push_back(intervals[i]);
            }
            else {
                int temp = max(res.back()[1], intervals[i][1]);
                res.back()[1] = temp;
            }
        }
        return res;
    }
};