class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi = nums[0];
        int mini = nums[0];
        int prevMax = nums[0];
        int preMin = nums[0];
        int ans = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            prevMax = maxi;
            preMin = mini;
            mini = min(preMin * nums[i], min(prevMax * nums[i],nums[i]));

            maxi = max(prevMax * nums[i], max(nums[i],preMin * nums[i]));
            
            int temp = max(maxi, mini);
            ans = max(ans, temp);
        }
        return ans;
    }
};
