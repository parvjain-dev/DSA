class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int sum = 0;
        unordered_map<int, int> mp;
        mp[0] = -1;
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1)
                sum++;
            else
                sum--;
            if (mp.count(sum)) {
                ans = max(ans, i - mp[sum]);
            }
            if (!mp.count(sum)) {
                mp[sum] = i;
            }
        }
        return ans;
    }
};
