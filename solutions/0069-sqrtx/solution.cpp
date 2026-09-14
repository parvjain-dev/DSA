class Solution {
public:
    int mySqrt(int x) {
        int low = 0, high = x;
        long long  mid = low + (high - low) / 2;
        int ans = 0;
        while (low <= high) {
            if (mid * mid > x)
                high = mid - 1;
            else if (mid * mid < x) {
                ans = mid;
                low = mid + 1;
            } else {
                return mid;
            }
            mid = low + (high - low) / 2;
        }
        return ans;
    }
};
