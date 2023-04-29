class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int r = arr.size() - 1;
        int l = 0;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (arr[mid] < arr[mid + 1]) {
                l = mid + 1;
            }
            else {
                r = mid - 1;
            }
        }
        return l;
    }
};