class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        vector<int> freq(2, 0);
        int zero_count = 0, res = 0;
        int i = 0;
        for (int j = 0; j < nums.size(); j++) {
            if(nums[j]==0) zero_count++;
            while (zero_count > k ) {
                if(nums[i]==0) zero_count--;
                i++;
            }
            
            res = max(res, j - i + 1);
        }
        return res;
    }
};
