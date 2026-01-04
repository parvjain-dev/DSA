class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res(numRows);
        int ans = 1;
        res[0].push_back(ans);
        for (int j = 1; j < numRows; j++) {
            res[j].push_back(ans);
            for (int i = 0; i < j; i++) {
                ans = ans * (j - i);
                ans = ans / (i + 1);
                res[j].push_back(ans);
            }
            ans = 1;
        }

        return res;
    }
};
