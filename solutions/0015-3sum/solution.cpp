class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        int j = 1, k = nums.size() - 1;
        sort(nums.begin(), nums.end());
        int i = 0;
        while (i <= nums.size() - 3) {
            j = i + 1, k = nums.size() - 1;
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == 0) {
                    vector<int> temp= {nums[i], nums[j], nums[k]};
                    // sort(temp.begin(), temp.end());
                    res.push_back(temp);
                    k--;
                    
                    j++;
                    while (k > j && nums[k] == nums[k + 1]) {
                        k--;
                    }
                    while (j < k && nums[j] == nums[j - 1]) {
                        j++;
                    }
                } else if (sum > 0) {
                    k--;
                    while (k > j && nums[k] == nums[k + 1]) {
                        k--;
                    }
                } else {
                    j++;
                    while (j < k && nums[j] == nums[j - 1]) {
                        j++;
                    }
                }
            }
            i++;
            while (i <= nums.size() - 3 && nums[i] == nums[i - 1]) {
                i++;
            }
        }

        return res;
    }
};
