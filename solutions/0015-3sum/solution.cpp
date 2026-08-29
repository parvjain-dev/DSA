class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int i = 0;
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        while (i < nums.size()) {
            int j = i + 1, k = nums.size() - 1;

            while (j < k) {

                if (nums[i] + nums[j] + nums[k] < 0) {
                    j++;
                } else if (nums[i] + nums[j] + nums[k] > 0) {
                    k--;
                } else {
                    res.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                    while (j < k && nums[j] == nums[j - 1]) {
                        j++;
                    }
                    while (k > j && nums[k] == nums[k + 1]) {
                        k--;
                    }
                }
            }
            i++;
            while (i < nums.size() - 1 && nums[i] == nums[i - 1]) {
                i++;
            }
        }

        return res;
    }
};
