class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals,
                               vector<int>& newInterval) {
        vector<vector<int>> res;
        int s2 = newInterval[0], e2 = newInterval[1];
        bool inserted = false;
        for (int i = 0; i < intervals.size(); i++) {
            int s1 = intervals[i][0];
            int e1 = intervals[i][1];
            if (e1 >= s2 && s1 <= e2) {
                s2 = min(s1, s2);
                e2 = max(e1, e2);
            } else if (s1 > e2) {
                if (!inserted) {
                    vector<int> temp = {s2, e2};
                    res.push_back(temp);
                }

                inserted = true;
                res.push_back({s1, e1});
            } else {
                vector<int> temp = {s1, e1};
                res.push_back(temp);
            }
        }
        if (!inserted) {
            res.push_back({s2, e2});
        }

        return res;
    }
};
