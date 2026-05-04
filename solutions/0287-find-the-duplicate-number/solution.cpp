class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = 0;
        int fast = 0;
        while (true) {
            slow = nums[slow];
            fast = nums[fast];
            fast = nums[fast];
            if (nums[slow] == nums[fast]) {
                slow = 0;
                while (nums[fast] != nums[slow]) {
                    slow = nums[slow];
                    fast = nums[fast];
                }
                return nums[slow];
            }
        }
    }
};
