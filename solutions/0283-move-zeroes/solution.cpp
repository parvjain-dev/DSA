class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int w = 0, r = 0;
        while (r < nums.size()) {
            if (nums[r] != 0) {
                swap(nums[w], nums[r]);
                w++;
            }
            r++;
        }
    }
};
