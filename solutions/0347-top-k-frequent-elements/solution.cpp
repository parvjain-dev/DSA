class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<vector<int>> bucket(nums.size() + 1);

        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }
        for (auto it : mp) {
            bucket[it.second].push_back(it.first);
        }
        vector<int> res;
        for (int i = bucket.size() - 1; i >= 0; i--) {
            for (int j = 0; j < bucket[i].size(); j++) {
                res.push_back(bucket[i][j]);
                k--;
                if (k == 0)
                    break;
            }
            if (k == 0)
                break;
        }

        return res;
    }
};
