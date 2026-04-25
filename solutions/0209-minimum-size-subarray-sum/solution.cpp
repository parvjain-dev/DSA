class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int res = 0;
        int minLen = INT_MAX;
        int sum = 0;
        int i = 0;
        for (int j = 0; j < nums.size(); j++) {
            sum += nums[j];

            while (sum >= target) {
                minLen = min(minLen, j - i + 1);
                sum -= nums[i];
                i++;
            }
        }
        if(minLen==INT_MAX) return 0;
        return minLen;
    }
};
