class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int arr[matrix.size()][matrix.size()];
        for(int i=0; i< matrix.size();i++){
            for(int j=0; j< matrix.size(); j++){
                arr[j][matrix.size()-1-i]= matrix[i][j];
            }
        }
         for(int i=0; i< matrix.size();i++){
            for(int j=0; j< matrix.size(); j++){
                matrix[i][j]= arr[i][j];
            }
        }
    }
};
