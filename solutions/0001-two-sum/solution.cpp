class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        int temp = 0;
        ;
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]] = i;
        }

        for (auto it : mp) {
            cout << it.first << " " << it.second << endl;
        }
        for (int i = 0; i < nums.size(); i++) {
            temp = target - nums[i];
            if (mp.find(temp) != mp.end()) {
                if (i != mp[temp]) {
                    res.push_back(i);
                    res.push_back(mp[temp]);
                    break;
                }
            }
        }
        sort(res.begin(), res.end());
        return res;
    }
};
