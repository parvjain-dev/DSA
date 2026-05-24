class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals,
                               vector<int>& newInterval) {
        bool inserted = false;
        int start2 = newInterval[0];
        int end2 = newInterval[1];
        vector<vector<int>> res;
        if (intervals.size() < 1) {
            res.push_back(newInterval);
            return res;
        }

        for (int i = 0; i < intervals.size(); i++) {
            int start1 = intervals[i][0];
            int end1 = intervals[i][1];

            if (end1 < start2) {
                res.push_back({start1, end1});
            } else if (start1 > end2) {
                if (!inserted) {
                    inserted = true;
                    res.push_back({start2, end2});
                }
                res.push_back({start1, end1});
            } else {
                start2 = min(start1, start2);
                end2 = max(end1, end2);
            }
        }
        if (!inserted) {
            inserted = true;
            res.push_back({start2, end2});
        }
        return res;
    }
};
