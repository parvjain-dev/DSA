class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> st;
        if (nums.size() < 1)
            return 0;
        for (int i = 0; i < nums.size(); i++) {
            st.insert(nums[i]);
        }

        int ans = 1;
        for (auto it : st) {
            if (!st.count(it - 1)) {
                int temp = it;
                int count = 1;
                while (st.count(temp + 1)) {
                    count++;
                    temp++;
                    ans = max(count, ans);
                }
            }
        }
        return ans;
    }
};
