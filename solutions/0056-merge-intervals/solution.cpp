class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        sort(intervals.begin(), intervals.end());
        res.push_back(intervals[0]);
        int index = 0;
        for (int i = 1; i < intervals.size(); i++) {
            if (intervals[i][0] <= res[index][1]) {

                res[index][1] = max(res[index][1], intervals[i][1]);

            } else {
                res.push_back(intervals[i]);
                index++;
            }
        }

        return res;
    }
};
