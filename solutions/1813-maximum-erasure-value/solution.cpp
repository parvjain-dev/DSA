class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int, int> freq;
        int sum = 0, maxi = INT_MIN;

        int i = 0;
        for (int j = 0; j < nums.size(); j++) {
            sum += nums[j];
            freq[nums[j]]++;
            while (freq.size() != j - i + 1) {
                sum -= nums[i];
                freq[nums[i]]--;
                if (freq[nums[i]] == 0)
                    freq.erase(nums[i]);
                i++;
            }
            maxi = max(sum, maxi);
        }
        return maxi;
    }
};
