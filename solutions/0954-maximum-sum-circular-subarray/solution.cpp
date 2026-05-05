class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxi = nums[0];
        int mini = nums[0];
        int maxiG = nums[0];
        int miniG = nums[0];
        int ans = nums[0];
        int totalSum = 0;

        for (int i = 0; i < nums.size(); i++) {
            totalSum += nums[i];
        }
        for (int i = 1; i < nums.size(); i++) {
            int v1 = nums[i];
            maxi = max(maxi + v1, v1);
            maxiG = max(maxi, maxiG);
            mini = min(mini + v1, v1);
            miniG = min(mini, miniG);
            ans = max(maxiG, totalSum - miniG);
        }
        if(maxiG <0) return maxiG;
        return ans;
    }
};
