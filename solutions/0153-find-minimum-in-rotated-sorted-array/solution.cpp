class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;
        int mid = low + (high - low) / 2;
        int ans = INT_MAX;
        while (low <= high) {

            // left half sorted
            if (nums[low] <= nums[mid]) {
                // if ( nums[low] <= nums[high]) {
                //     high = mid - 1;
                // } else {
                //     low = mid + 1;
                // }
                ans = min(ans, nums[low]);
                low = mid + 1;
            } else {
                ans = min(ans,nums[mid]);
                high = mid - 1;
            }
            mid = low + (high - low) / 2;
        }
        return ans;
    }
};
