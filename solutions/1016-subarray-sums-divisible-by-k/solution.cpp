class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        mp[0]++;
        int ans = 0;
        int prefix=0;
        for (int i = 0; i < nums.size(); i++) {
            prefix += nums[i];
            int mod = ((prefix % k) + k) % k;

            if (mp.count(mod)) {
                ans = ans + mp[mod];
            }
            mp[mod]++;
        }
        return ans;
    }
};
