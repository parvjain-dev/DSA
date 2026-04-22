class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        int i = 0;
        while (i < nums.size() ) {
            int j = i + 1, k = nums.size() - 1;
            while (j < k) {

                int summ = nums[i] + nums[j] + nums[k];
                if (summ > 0) {
                    k--;
                } else if (summ < 0) {
                    j++;
                } else {
                    vector<int> temp = {nums[i], nums[j], nums[k]};
                    res.push_back(temp);
                    j++;

                    while (j < k && nums[j] == nums[j - 1]) {
                        j++;
                    }
                    k--;
                    while (k > j && nums[k] == nums[k + 1]) {
                        k--;
                    }
                }
            }
            i++;
            while (i < nums.size() && nums[i] == nums[i - 1]) {
                i++;
            }
        }
        return res;
    }
};
