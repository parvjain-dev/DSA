class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
        }
        int maxi = nums[0];
        int mini = nums[0];
        int maxTemp = nums[0];
        int miniTemp = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            int prevMax = maxTemp;
            int prevMin = miniTemp;
            maxTemp= max(nums[i], prevMax + nums[i]);
            miniTemp = min(nums[i],prevMin + nums[i]);
            maxi = max(maxi, maxTemp);
            mini = min(mini, miniTemp);
        }

        cout <<sum<<" "<< maxi << " " << mini;
        if (maxi < 0) {
            return maxi;
        }
        return max(maxi, sum - mini);
    }
};
