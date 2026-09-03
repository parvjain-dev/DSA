class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prefix = 1, suffix = 1;
        int preMax = INT_MIN, suffMax = INT_MIN;
        bool flag_Zero = false;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {

                flag_Zero = true;
                prefix = 1;
                preMax = max(preMax, nums[i]);

                continue;
            }
            prefix *= nums[i];
            preMax = max(preMax, prefix);
        }

        for (int i = nums.size() - 1; i >= 0; i--) {
            if (nums[i] == 0) {
                flag_Zero = true;
                suffix = 1;
                suffMax = max(suffMax, nums[i]);

                continue;
            }
            suffix *= nums[i];
            suffMax = max(suffMax, suffix);
        }
        cout << suffMax << " " << preMax;
        // if((suffMax<0 && preMax<0) && flag_Zero) return 0;
        return max(suffMax, preMax);
    }
};
