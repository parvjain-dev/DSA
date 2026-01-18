class Solution {
public:
    int BS_rec(vector<int>& nums, int target, int low, int high) {
        int mid = (low + high) / 2;
        int ans =-1;
        if (low > high)
            return -1;

        if (nums[mid] > target)
            return BS_rec(nums, target, 0, mid - 1);
        else if (nums[mid] < target) {
            cout << mid;
            return BS_rec(nums, target, mid + 1, high);
        } else
            return mid;
    }
    int search(vector<int>& nums, int target) {
        return BS_rec(nums, target, 0, nums.size() - 1);
    }
};
