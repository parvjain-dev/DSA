class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if (nums.size() < 2)
            return nums[0];

        int curr = nums[0];
        int count = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (curr == nums[i]) {
                count++;
            } else {
                count--;
            }
            if (count == 0) {
                count = 1;
                curr = nums[i];
            }
        }
        return curr;
    }
};
