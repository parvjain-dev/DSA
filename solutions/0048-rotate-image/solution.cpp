class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int size= matrix.size()-1;
        vector<vector<int>> temp(matrix.size(), vector<int>(matrix.size()));
        for(int i =0; i<matrix.size(); i++){
            for(int j=0; j<matrix[i].size(); j++){
                temp[j][size]= matrix[i][j];
            }
            size--;
        }
        matrix= temp;
    }
};
