class Solution {
private:
    void shrink(int a, int b, int& low, int& high, int mid) {
        if (a % 2 == 0 && b % 2 != 0) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

public:
    int singleNonDuplicate(vector<int>& nums) {

        if (nums.size() == 1)
            return nums[0];
        if (nums[0] != nums[1])
            return nums[0];
        if (nums[nums.size() - 1] != nums[nums.size() - 2])
            return nums[nums.size() - 1];

        int low = 1, high = nums.size() - 2;
        int mid = low + (high - low) / 2;
        while (low <= high) {

            if (nums[mid] == nums[mid + 1]) {
                shrink(mid, (mid + 1), low, high, mid);
            } else if (nums[mid] == nums[mid - 1]) {
                shrink((mid - 1), mid, low, high, mid);
            } else {
                return nums[mid];
            }

            mid = low + (high - low) / 2;
        }
        return -1;
    }
};
