class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        int i = 0, j = k - 1;
        double sum = 0;
        if(nums.size()<2) return nums[0];
        for (int p = i; p <= j; p++) {
            sum += nums[p];
        }

        double maxi = sum ;
        
        while (j < nums.size()) {
            sum -= nums[i];
            i++;
            j++;
            sum += nums[j];
            if (maxi < sum )
                maxi = sum ;
        }
        return maxi/k;
    }
};
