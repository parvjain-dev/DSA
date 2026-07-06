class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res(numRows);
        for (int j = 1; j <= numRows; j++) {
            int result = 1, x = 1;
            int temp = j;
            res[j-1].push_back(1);
            for (int i = 1; i < j; i++) {
                temp--;
                result = (result * (j-i)) / i;
                res[j-1].push_back(result);
                x++;
            }
            // cout<<endl;
        }

        return res;
    }
};
