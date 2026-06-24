class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        for (int i = 0; i <= nums.size() + 1; i++) {
            if (!mp.empty() && mp.count(i)) {
                mp[i]--;
                if (mp[i] == 0) {
                    mp.erase(i);
                }
            } else {
                return i;
            }
        }
       
        return -1;
    }
};
