class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long maxSum = 0, sum = 0;
        unordered_map<int, int> freq;

        int i = 0;
        for (int j = 0; j < nums.size(); j++) {
            freq[nums[j]]++;

            sum += nums[j];
            if (j - i + 1 > k) {
                sum -= nums[i];
                freq[nums[i]]--;
                if (freq[nums[i]] == 0) {
                    freq.erase(nums[i]);
                }
                i++;
            }
            if (j - i + 1 == k) {
                if (freq.size() == k) {
                    maxSum = max(maxSum, sum);
                }
            }
        }
        return maxSum;
    }
};
