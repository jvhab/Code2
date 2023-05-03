class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int left{};
        int right{ n - 1 };
        vector<int> res(n);
        for (int i = n - 1; i >= 0; --i) {
            if (nums[left] * nums[left] > nums[right] * nums[right]) {
                res[i] = nums[left] * nums[left];
                left++;
            }
            else {
                res[i] = nums[right] * nums[right];
                right--;
            }
        }
        return res;
    }
};