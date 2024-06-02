class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] > nums[mid + 1]) {
                right = mid; // peak is in the left half
            } else {
                left = mid + 1; // peak is in the right half
            }
        }
        return left; // or return right; both are same when left == right
    }
};
