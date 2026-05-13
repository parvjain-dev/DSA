class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix(nums.size());
        vector<int> res(nums.size());
        prefix[0] = 1;
        int temp = 1;
        for (int i = 1; i < nums.size(); i++) {
            temp = nums[i - 1] * temp;
            prefix[i] = temp;
        }

        res[res.size() - 1] = prefix[prefix.size() - 1];
        int temp2 = 1;
        for (int i = nums.size() - 2; i >= 0; i--) {
            temp2 = nums[i+1] * temp2;
            res[i] = temp2 * prefix [i];
        }
        return res;
    }
};
