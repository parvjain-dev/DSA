class Solution {
private:
    int sum_arr(vector<int>& piles) {
        int sum = 0;
        for (int i = 0; i < piles.size(); i++) {
            sum += piles[i];
        }
        return sum;
    }
    int max_arr(vector<int>& piles) {
        int Maxi = INT_MIN;
        for (int i = 0; i < piles.size(); i++) {
            Maxi = max(Maxi, piles[i]);
        }
        return Maxi;
    }

public:
    int shipWithinDays(vector<int>& weights, int days) {
        int s = weights.size();
        int limit = sum_arr(weights);
        cout << limit;
        int ans =-1;
        int low =max_arr(weights) , high =limit;
        while(low<=high) {
            int mid = low+(high -low)/2;
            int count = 0;
            int temp = 0;
            for (int j = 0; j < weights.size(); j++) {
                temp += weights[j];
                if (temp > mid) {
                    count++;
                    temp = weights[j];
                }
            }
            if (count + 1 <= days) {
                ans =mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return ans;
    }
};
