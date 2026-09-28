class Solution {
private:
    int max_arr(vector<int>& piles) {
        int Maxi = INT_MIN;
        for (int i = 0; i < piles.size(); i++) {
            Maxi = max(Maxi, piles[i]);
        }
        return Maxi;
    }

public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1, high = max_arr(nums);
        int mid = low + (high - low) / 2;
        int ans = -1;
        while (low <= high) {
            long long result = 0;
            for (int j = 0; j < nums.size(); j++) {
                result += ceil(double(nums[j]) / mid);
            }

            if (result <= threshold) {
                ans = mid;
                high =mid-1;
            }else{
                low = mid+1;
            }
            mid = low + (high - low) / 2;
        }

        return ans;
    }
};
