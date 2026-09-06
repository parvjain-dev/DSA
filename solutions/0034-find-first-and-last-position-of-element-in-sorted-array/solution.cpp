class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res(2, -1);
        int l_b = lower_bound(nums.begin(), nums.end(), target) - nums.begin();

        if (l_b < nums.size() && nums[l_b] == target) {

            res[0] = l_b;
            res[1] = upper_bound(nums.begin(), nums.end(), target) -
                     nums.begin() - 1;
        }
        return res;
    }
};
