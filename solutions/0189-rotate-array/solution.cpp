class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int temp= k%nums.size();

        reverse(nums.begin(), nums.end()-temp);
        reverse(nums.end()-temp, nums.end());
        reverse(nums.begin(), nums.end());
    }
};
