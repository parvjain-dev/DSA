class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        int i = 0;
        vector<vector<int>> res;
        while (i < nums.size()) {
            int j = i + 1;
            while (j < nums.size()) {
                int k = j + 1, l = nums.size() - 1;
                while (k < l) {
                    long long sum= (long long)nums[i] + (long long)nums[j] + (long long)nums[k] + (long long)nums[l] ;
                    if (sum> target) {
                        l--;
                    } else if (sum < target) {
                        k++;
                    } else {
                        res.push_back({nums[i], nums[j], nums[k], nums[l]});
                        k++;
                        l--;
                        while (k < l && nums[k] == nums[k - 1]) {
                            k++;
                        }
                        while (k < l && nums[l] == nums[l + 1]) {
                            l--;
                        }
                    }
                }
                j++;
                while (j < nums.size() - 1 && nums[j] == nums[j - 1]) {
                    j++;
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
