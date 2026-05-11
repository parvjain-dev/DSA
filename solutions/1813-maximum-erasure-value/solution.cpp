class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_set<int> st;

        int sum = 0;
        int maxi = INT_MIN;
        int i = 0;
        for (int j = 0; j < nums.size(); j++) {

            sum += nums[j];

            while (st.count(nums[j])) {
                sum -= nums[i];
                st.erase(nums[i]);
                i++;
            }
            st.insert(nums[j]);
            maxi = max(sum, maxi);
        }
        return maxi;
    }
};
