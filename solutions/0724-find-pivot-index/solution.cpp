class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSum = 0;
        for (int i = 0; i < nums.size(); i++) {
            totalSum += nums[i];
        }

        int suffix = 0;
        int prefix = 0;
        for (int i = 0; i < nums.size(); i++) {
            suffix = totalSum - prefix - nums[i];
            if (suffix == prefix) {
                return i;
            }
            prefix += nums[i];
        }

        return -1;
    }
};
