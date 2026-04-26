class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int closest = 0, diff = INT_MAX;
        int j, k;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            j = i + 1, k = nums.size() - 1;
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                int temp = abs(sum - target);
                if (temp <= diff) {
                    diff = temp;
                    closest = sum;
                }
                if (sum > target) {
                    k--;
                } else if (sum < target) {
                    j++;
                } else {
                    return target;
                }
            }
        }
        return closest;
    }
};
