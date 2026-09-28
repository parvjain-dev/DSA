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
    int minDays(vector<int>& bloomDay, int m, int k) {
        int low = 1, high = max_arr(bloomDay);
        int mid = low + (high - low) / 2;
        int ans = -1;
        while (low <= high) {

            int count = 0, temp = 0;
            for (int i = 0; i < bloomDay.size(); i++) {
                if (bloomDay[i] <= mid) {
                    temp++;
                } else {
                    temp = 0;
                }
                if (temp == k) {
                    count++;
                    temp = 0;
                }
            }
            if (count < m) {
                low = mid+1;
            }else{
                high = mid-1;
                ans =mid;
            }
            mid = low + (high - low) / 2;
        }
        return ans;
    }
};
