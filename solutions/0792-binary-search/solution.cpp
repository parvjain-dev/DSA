class Solution {
private:
    int binary_Search(vector<int>& nums, int low, int high, int target) {
        if (low > high)
            return -1;
        int mid = low + (high - low) / 2;
        if (nums[mid] > target)
            return binary_Search(nums, low, mid - 1, target);
        else if (nums[mid] < target)
            return binary_Search(nums, mid + 1, high, target);
        else {
            return mid;
        }
    }

public:
    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;

        return binary_Search(nums, low, high, target);
    }
};
