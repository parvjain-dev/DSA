class Solution {
public:
    bool firstRowZero(vector<vector<int>>& matrix) {
        bool isfirstRowZero = false;
        for (int i = 0; i < matrix[0].size(); i++) {
            if (matrix[0][i] == 0) {
                isfirstRowZero = true;
                break;
            }
        }
        cout<<"isfirstRowZero "<<isfirstRowZero<<endl;
        return isfirstRowZero;
    }
    bool firstColZero(vector<vector<int>>& matrix) {
        bool isfirstColZero = false;
        for (int j = 0; j < matrix.size(); j++) {
            if (matrix[j][0] == 0) {
                isfirstColZero = true;
                break;
            }
        }
        cout<<"isfirstColZero "<<isfirstColZero<<endl;
        return isfirstColZero;
    }
    void setZeroes(vector<vector<int>>& matrix) {
        // int temp = matrix[0][0];
        bool isfirstRowZero = firstRowZero(matrix);
        bool isfirstColZero= firstColZero(matrix);
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                if (i == 0 || j == 0)
                    continue;
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                if (i == 0 || j == 0)
                    continue;
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }

        if (isfirstRowZero) {
            for (int i = 0; i < matrix[0].size(); i++) {
                matrix[0][i] = 0;
            }
        }
        if (isfirstColZero) {
            for (int j = 0; j < matrix.size(); j++) {
                matrix[j][0] = 0;
            }
        }
    }
};
