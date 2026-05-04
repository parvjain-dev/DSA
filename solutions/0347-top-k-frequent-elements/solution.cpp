class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }
        vector<vector<int>> bucket(nums.size() + 1);

        for (auto it : mp) {
            bucket[it.second].push_back(it.first);
        }
        vector<int> res;
        int temp = k;
        for (int i = bucket.size()-1; i >= 1; i--) {
            for (int j = 0; j <bucket[i].size(); j++) {
                res.push_back(bucket[i][j]);
                temp--;
                if (temp == 0) {
                    break;
                }
            }
            if (temp == 0) {
                break;
            }
        }
        return res;
    }
};
