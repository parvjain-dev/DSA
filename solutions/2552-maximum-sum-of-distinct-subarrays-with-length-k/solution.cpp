class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long maxi = LLONG_MIN, sum = 0;
        unordered_map<int, int> mp;

        for (int f = 0; f < k; f++) {
            mp[nums[f]]++;
            sum += nums[f];
            if (mp.size() == k) {
                maxi = max(maxi, sum);
            }
        }

        for (int j = k; j < nums.size(); j++) {
            sum -= nums[j - k];

            mp[nums[j - k]]--;
            if (mp[nums[j - k]] == 0)
                mp.erase(nums[j - k]);
            mp[nums[j]]++;
            sum += nums[j];
           
            if (mp.size() == k) {
                maxi = max(maxi, sum);
            }
        }
        if (maxi == LLONG_MIN)
            return 0;
        return maxi;
    }
};
