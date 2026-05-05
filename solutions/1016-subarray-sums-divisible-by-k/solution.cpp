class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> mp;

        int prefix = 0;
        int ans = 0;
        mp[0]++;
        for (int i = 0; i < nums.size(); i++) {
            prefix += nums[i];
            int mod = prefix % k;
            if (mod < 0)
                mod = mod + k;
            if (mp.count(mod)) {
                ans += mp[mod];
            }
            mp[mod]++;
        }
        return ans;
    }
};
