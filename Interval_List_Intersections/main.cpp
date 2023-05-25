class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        vector<vector<int>> res;
        int n1 = firstList.size();
        int n2 = secondList.size();
        int i{};
        int j{};
        while (i < n1 && j < n2) {
            int temp1 = max(firstList[i][0], secondList[j][0]);
            int temp2 = min(firstList[i][1], secondList[j][1]);
            if (temp1 <= temp2) {
                res.push_back({ temp1, temp2 });
            }
            if (firstList[i][1] < secondList[j][1]) {
                i++;
            }
            else {
                j++;
            }
        }
        return res;
    }
};