class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        if(nums.size()==0) return 0;
        for (int i = 0; i < nums.size(); i++) {
            st.insert(nums[i]);
        }
        int res = 1;
        for (auto it : st) {
            int count = 1;

            if (st.find(it - 1) ==st.end()) {
                int temp = it;
                while (st.find(temp+1) !=st.end()) {
                    count++;
                    temp++;
                }
            }
            res=max(res, count);
        }
        return res;
    }
};
