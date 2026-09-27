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
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = max_arr(piles);
        int ans = high;

        cout << high;
        int mid = low + (high - low) / 2;

        while (low <= high) {
            long long count = 0;
            for (int i = 0; i < piles.size(); i++) {
                int temp = ceil(double(piles[i]) / mid);
                count += temp;
            }
            if (count > h) {
                low = mid + 1;
            } else {
                ans = mid;
                high = mid - 1;
            }
            mid = low + (high - low) / 2;
        }

        return ans;
    }
};
