class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0;
        int r = numbers.size() - 1;
        vector<int> res(2);
        while (l < r) {
            if (numbers[l] + numbers[r] == target) {
                res[0] = l + 1;
                res[1] = r + 1;
                return res;
            }
            else if (numbers[l] + numbers[r] > target) {
                r--;
            }
            else if (numbers[l] + numbers[r] < target) {
                l++;
            }
        }
        return res;
    }
};