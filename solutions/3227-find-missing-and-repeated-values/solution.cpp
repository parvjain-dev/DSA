class Solution {

public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {

        vector<int> res(2, 0);
        int temp_Sum = 0, org_Sum = 0;
        long long temp_Sqr_Sum = 0;
        long long org_Sqr_Sum = 0;
        int n = grid.size() * grid.size();
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid.size(); j++) {
                temp_Sum += grid[i][j];
                temp_Sqr_Sum += grid[i][j] * grid[i][j];
            }
        }
        org_Sum = (n * (n + 1)) / 2;
        org_Sqr_Sum = (n * (n + 1));
        org_Sqr_Sum = (org_Sqr_Sum * (2 * n + 1)) / 6;

        int equa_1 = org_Sum - temp_Sum;
        int equa_2 = org_Sqr_Sum - temp_Sqr_Sum;
        equa_2 /= equa_1;

        int repeating = (equa_1 + equa_2) / 2;

        int missing = repeating - equa_1;

        return {missing, repeating};
    }
};
