class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        while (true) {
        int i = rand() % nums.size();
        int j = rand() % nums.size();
        if (i != j && nums[i] == nums[j]) {
            return nums[i];
        }
    }
    }
};
