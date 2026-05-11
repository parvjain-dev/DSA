class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals,
                               vector<int>& newInterval) {
        vector<vector<int>> res;
        if (intervals.size() < 1) {
            res.push_back(newInterval);
            return res;
        }
        int s2 = newInterval[0];
        int e2 = newInterval[1];
        bool inserted = false;
        for (int i = 0; i < intervals.size(); i++) {
            int s1 = intervals[i][0];
            int e1 = intervals[i][1];

            if (s2 <= e1 && e2 >= s1) {
                s2 = min(s1, s2);
                e2 = max(e1, e2);

            } else if (s1 > e2) {
                if (!inserted) {
                    res.push_back({s2, e2});
                    inserted = true;
                }
                res.push_back({s1, e1});

            } else {
                res.push_back({s1, e1});
            }
        }
        if (!inserted) {
            res.push_back({s2, e2});
        }
        return res;
    }
};
