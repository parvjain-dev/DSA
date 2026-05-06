class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> mp;
        int sum = 0;
        mp[sum] = -1;
        int maxi = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0)
                sum++;
            else
                sum--;
            if (!mp.count(sum)) {
                mp[sum] = i;
            }

            if (mp.count(sum)) {
                maxi = max(maxi, i - mp[sum]);
            }
        }
        return maxi;
    }
};
